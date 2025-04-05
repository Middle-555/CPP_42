/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:23:36 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/05 12:44:59 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WhatEver.hpp"

int	main(void)
{
	printTitle("Test avec int");

	int a = 2;
	int b = 3;

	printPair("Avant swap:", a, b);
	::swap(a, b);
	printPair("Après swap:", a, b);

	std::cout << "min(a, b) = " << MAGENTA << ::min(a, b) << RESET << std::endl;
	std::cout << "max(a, b) = " << MAGENTA << ::max(a, b) << RESET << std::endl;

	printTitle("Test avec std::string");

	std::string c = "chaine1";
	std::string d = "chaine2";

	printPair("Avant swap:", c, d);
	::swap(c, d);
	printPair("Après swap:", c, d);

	std::cout << "min(c, d) = " << MAGENTA << ::min(c, d) << RESET << std::endl;
	std::cout << "max(c, d) = " << MAGENTA << ::max(c, d) << RESET << std::endl;

	return 0;
}
