/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:53:15 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/13 16:57:40 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

int	main()
{
	printTitle("Test Array<T> - Constructeur par copie & opérateur =");

	// Création d'un tableau original
	Array<int> original(5);
	for (unsigned int i = 0; i < original.size(); ++i)
		original[i] = i * 10;

	std::cout << YELLOW << "Original :     " << RESET;
	for (unsigned int i = 0; i < original.size(); ++i)
		std::cout << original[i] << " ";
	std::cout << std::endl;

	// Test constructeur par copie
	Array<int> copy(original);
	std::cout << BLUE << "Copie (constructeur) : " << RESET;
	for (unsigned int i = 0; i < copy.size(); ++i)
		std::cout << copy[i] << " ";
	std::cout << std::endl;

	// Modification de la copie
	copy[0] = 999;
	std::cout << GREEN << "Copie modifiée :       " << RESET;
	for (unsigned int i = 0; i < copy.size(); ++i)
		std::cout << copy[i] << " ";
	std::cout << std::endl;

	// Vérification que l'original n'a pas changé
	std::cout << RED << "Original (inchangé) :  " << RESET;
	for (unsigned int i = 0; i < original.size(); ++i)
		std::cout << original[i] << " ";
	std::cout << std::endl;

	// Test opérateur =
	Array<int> assigned;
	assigned = original;

	std::cout << CYAN << "Copie par opérateur = : " << RESET;
	for (unsigned int i = 0; i < assigned.size(); ++i)
		std::cout << assigned[i] << " ";
	std::cout << std::endl;

	assigned[1] = 777;
	std::cout << MAGENTA << "Copie modifiée (=) :    " << RESET;
	for (unsigned int i = 0; i < assigned.size(); ++i)
		std::cout << assigned[i] << " ";
	std::cout << std::endl;

	std::cout << RED << "Original (toujours ok) : " << RESET;
	for (unsigned int i = 0; i < original.size(); ++i)
		std::cout << original[i] << " ";
	std::cout << std::endl;

	printTitle("Test accès hors-limite");

	try 
	{
		Array<int> test(3);
		test[0] = 1;
		test[1] = 2;
		test[2] = 3;

		std::cout << YELLOW << "Accès à test[1] : " << RESET << test[1] << std::endl;

		std::cout << RED << "Accès à test[999] (hors limite)..." << RESET << std::endl;
		std::cout << test[999] << std::endl; // 💣 ici : va throw
	}
	catch (std::exception &e) 
	{
		std::cerr << RED << "Exception attrapée : " << e.what() << RESET << std::endl;
	}
	return 0;
}