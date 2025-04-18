/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:49:00 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/17 16:15:23 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TestUtils.hpp"

class BitcoinExchange
{
private:
	std::map<std::string, float> _data;
public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &other);
	BitcoinExchange& operator=(BitcoinExchange const &other);
	~BitcoinExchange();
	void ExtractData(const std::string &filename);
};
