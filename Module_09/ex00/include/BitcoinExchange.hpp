/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:49:00 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/30 14:30:35 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TestUtils.hpp"

class BitcoinExchange
{
private:
	std::map<std::string, float> _data;
	bool	parseLine(const std::string &line, char delim, std::string &date, std::string &valueStr);
	bool 	isValidRate(const std::string &valueStr, float &value);
	bool 	isValidInputValue(const std::string &valueStr, float &value);
	void	handleExchange(const std::string &date, float value);
	void	errorLine(const std::string &msg, const std::string &line);
	void	exitWithError(const std::string &msg);
	void	PrintData(void) const;
	bool	isValidDateFormat(const std::string &date);
public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &other);
	BitcoinExchange& operator=(BitcoinExchange const &other);
	~BitcoinExchange();
	void	ExtractData(const std::string &filename);
	void	ProcessInputFile(const std::string &filename);
	float	GetValueAtDate(const std::string &date);
};
