/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:11:39 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/29 14:51:23 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main(void)
{
	printTitle("Test basique avec Span");

	try
	{
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << GREEN << "shortestSpan: " << sp.shortestSpan() << RESET << std::endl;
		std::cout << GREEN << "longestSpan : " << sp.longestSpan() << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	printTitle("Test erreur : pas assez de nombres");

	try
	{
		Span sp(1);
		sp.addNumber(42);
		std::cout << sp.shortestSpan() << std::endl; // Devrait lancer une exception
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	printTitle("Test erreur : Span plein");

	try
	{
		Span sp(2);
		sp.addNumber(21);
		sp.addNumber(84);
		sp.addNumber(999);
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	
	printTitle("Test avec 10 000 nombres (addRange)");
	try
	{
		std::srand(time(NULL));
		Span sp(10000);
		std::vector<int> bigVec;

		for (int i = 0; i < 10000; ++i)
			bigVec.push_back(std::rand());

		sp.addRange(bigVec.begin(), bigVec.end());

		std::cout << GREEN << "shortestSpan: " << sp.shortestSpan() << RESET << std::endl;
		std::cout << GREEN << "longestSpan : " << sp.longestSpan() << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	return 0;
}