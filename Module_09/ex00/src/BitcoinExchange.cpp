/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:58:04 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/30 14:34:17 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &other)
{
	*this = other;
}
BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other)
{
	if (this != &other)
		this->_data = other._data;
	return *this;
}

BitcoinExchange::~BitcoinExchange(){}

static std::string trim(const std::string& str)
{
	size_t first = str.find_first_not_of(" \t\r\n");
	size_t last = str.find_last_not_of(" \t\r\n");
	if (first == std::string::npos || last == std::string::npos)
		return "";
	return str.substr(first, (last - first + 1));
}

void	BitcoinExchange::errorLine(const std::string &msg, const std::string &line)
{
	std::cerr << "Error: " << msg << " -> [" << line << "]" << std::endl;
}

void	BitcoinExchange::exitWithError(const std::string &msg)
{
	std::cerr << "Error: " << msg << std::endl;
	exit(1);
}

bool	BitcoinExchange::isValidDateFormat(const std::string &date)
{
	if (date.length() != 10)
		return false;
	if (!isdigit(date[0]) || !isdigit(date[1]) || !isdigit(date[2]) || !isdigit(date[3]))
		return false;
	if (date[4] != '-')
		return false;
	if (!isdigit(date[5]) || !isdigit(date[6]))
		return false;
	if (date[7] != '-')
		return false;
	if (!isdigit(date[8]) || !isdigit(date[9]))
		return false;
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());
	if (year < 2009)
		return false;
	if (month < 1 || month > 12)
		return false;
	if (day < 1 || day > 31)
		return false;
	return true;
}


bool	BitcoinExchange::isValidRate(const std::string &valueStr, float &value)
{
	if (valueStr.empty())
		return false;
	value = std::atof(valueStr.c_str());
	return value >= 0;
}

bool BitcoinExchange::isValidInputValue(const std::string &valueStr, float &value)
{
	if (valueStr.empty())
		return false;
	value = std::atof(valueStr.c_str());
	return value >= 0 && value <= 1000;
}

void	BitcoinExchange::handleExchange(const std::string &date, float value)
{
	try
	{
		float rate = GetValueAtDate(date);
		std::cout << date << " => " << value << " = " << value * rate << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

bool	BitcoinExchange::parseLine(const std::string &line, char delim, std::string &date, std::string &valueStr)
{
	if (line.empty() || line.find(delim) == std::string::npos)
		return false;

	std::stringstream ss(line);
	if (std::getline(ss, date, delim) && std::getline(ss, valueStr))
	{
		date = trim(date);
		valueStr = trim(valueStr);
		return true;
	}
	return false;
}

void	BitcoinExchange::ExtractData(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	if (!file)
		exitWithError("can't open file");
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::string date, valueStr;
		float value;
		if (!parseLine(line, ',', date, valueStr))
		{
			errorLine("bad format", line);
			continue;
		}
		if (!isValidDateFormat(date))
		{
			errorLine("invalid date format", line);
			continue;
		}
		if (!isValidRate(valueStr, value))
		{
			errorLine("invalid value", line);
			continue;
		}
		if (_data.find(date) != _data.end())
		{
			errorLine("duplicate date", line);
			continue;
		}
		_data[date] = value;
	}
}

void	BitcoinExchange::PrintData(void) const
{
	std::map<std::string, float>::const_iterator it = this->_data.begin();
	while (it != this->_data.end())
	{
		std::cout << "Date: " << it->first << " | Value: " << it->second << std::endl;
		++it;
	}
}

float	BitcoinExchange::GetValueAtDate(const std::string &date)
{
	std::map<std::string, float>::iterator it = _data.lower_bound(date);
	if (it != _data.end() && it->first == date)
		return it->second;
	if (it == _data.begin())
		throw std::runtime_error("No earlier date available");
	--it;
	return it->second;
}

void	BitcoinExchange::ProcessInputFile(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	if (!file)
		exitWithError("can't open file");

	std::string line;
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::string date, valueStr;
		float value;
		if (!parseLine(line, '|', date, valueStr))
		{
			errorLine("bad format", line);
			continue;
		}
		if (!isValidDateFormat(date))
		{
			errorLine("invalid date format", line);
			continue;
		}
		if (!isValidInputValue(valueStr, value))
		{
			errorLine("invalid value", line);
			continue;
		}
		handleExchange(date, value);
	}
}
