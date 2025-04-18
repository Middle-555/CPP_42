/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:58:04 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/18 10:58:42 by kpourcel         ###   ########.fr       */
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

void	BitcoinExchange::ExtractData(const std::string &filename)
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
			std::cerr << "Error: no ',' find in the string" << std::endl;
			continue;
		}
		std::string date;
		std::string valueStr;
		std::stringstream ss(line);
		if (std::getline(ss, date, ',') && std::getline(ss, valueStr))
		{
			float value = std::atof(valueStr.c_str());
			this->_data[date] = value;
		}
		else
			std::cerr << "Error: bad format" << std::endl;
	}
}
