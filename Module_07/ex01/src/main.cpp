/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 11:09:19 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/13 11:41:09 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Iter.hpp"

void increment(int &n) { n += 1; }

void incrementFloat(float &f) { f += 1.1f; }

void toUpper(std::string &s) 
{
	for (size_t i = 0; i < s.length(); ++i)
		s[i] = std::toupper(s[i]);
}

void shout(char &c) 
{
	c = std::toupper(c);
}

int main(void) 
{
	// 🔸 INT
	printTitle("Test avec int");
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(int);

	std::cout << YELLOW << "Avant : " << RESET;
	iter(arr, size, printElem);
	std::cout << std::endl;

	iter(arr, size, increment);

	std::cout << GREEN << "Après increment : " << RESET;
	iter(arr, size, printElem);
	std::cout << std::endl;

	// 🔸 FLOAT
	printTitle("Test avec float");
	float farr[] = {0.5f, 1.5f, 2.5f};
	int fsize = sizeof(farr) / sizeof(float);

	std::cout << YELLOW << "Avant : " << RESET;
	iter(farr, fsize, printElem);
	std::cout << std::endl;

	iter(farr, fsize, incrementFloat);

	std::cout << GREEN << "Après increment : " << RESET;
	iter(farr, fsize, printElem);
	std::cout << std::endl;

	// 🔸 STRING
	printTitle("Test avec std::string");
	std::string sarr[] = {"bonjour", "les", "pommes"};
	int ssize = sizeof(sarr) / sizeof(std::string);

	std::cout << YELLOW << "Avant : " << RESET;
	iter(sarr, ssize, printElem);
	std::cout << std::endl;

	iter(sarr, ssize, toUpper);

	std::cout << GREEN << "Après toUpper : " << RESET;
	iter(sarr, ssize, printElem);
	std::cout << std::endl;

	// 🔸 CHAR
	printTitle("Test avec char");
	char carr[] = {'a', 'b', 'c'};
	int csize = sizeof(carr) / sizeof(char);

	std::cout << YELLOW << "Avant : " << RESET;
	iter(carr, csize, printElem);
	std::cout << std::endl;

	iter(carr, csize, shout);

	std::cout << GREEN << "Après shout : " << RESET;
	iter(carr, csize, printElem);
	std::cout << std::endl;

	// 🔸 TABLEAU VIDE
	printTitle("Test avec tableau vide");
	int empty[0];
	iter(empty, 0, printElem);

	return 0;
}