/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:58:04 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/19 12:23:12 by kpourcel         ###   ########.fr       */
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

void BitcoinExchange::ExtractData(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	if (!file)
	{
		std::cerr << "Error: can't open file" << std::endl;
		exit(1);
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		if (line.empty())
			continue;
		if (line.find(',') == std::string::npos)
		{
			std::cerr << "Error: no ',' found in line -> [" << line << "]" << std::endl;
			continue;
		}
		std::string date, valueStr;
		std::stringstream ss(line);
		if (std::getline(ss, date, ',') && std::getline(ss, valueStr))
		{
			date = trim(date);
			valueStr = trim(valueStr);
			if (valueStr.empty())
			{
				std::cerr << "Error: value is empty -> [" << line << "]" << std::endl;
				continue;
			}
			float value = std::atof(valueStr.c_str());
			if (this->_data.find(date) != this->_data.end())
			{
				std::cerr << "Warning: duplicate date -> " << date << std::endl;
				continue;
			}
			this->_data[date] = value;
		}
		else
		{
			std::cerr << "Error: bad format -> [" << line << "]" << std::endl;
		}
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
