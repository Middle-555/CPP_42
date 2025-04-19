/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:20:38 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/19 12:52:44 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	printResult(BitcoinExchange &btc, const std::string& date)
{
	std::cout << "🔍 Searching value at date: " << date << " ... ";
	try
	{
		float value = btc.GetValueAtDate(date);
		std::cout << "✅ Found: " << value << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "❌ " << e.what() << std::endl;
	}
}
int	main()
{
	std::cout << "🚀 Lancement de BitcoinExchange..." << std::endl;

	BitcoinExchange btc;
	btc.ExtractData("data.csv");

	std::cout << "\n📄 Traitement du fichier input.txt\n" << std::endl;
	btc.ProcessInputFile("input.txt");

	return 0;
}
