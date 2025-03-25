/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 15:21:18 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:35:54 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/brain.hpp"

brain::	brain(void)
{
	std::cout << "constructor called" << std::endl;
}

brain:: ~brain()
{
	std::cout << "destructor called" << std::endl;
}

int	main()
{
	brain instance;
	std::string str = "HI THIS IS BRAIN";

	std::string* ptrStr = &str;
	std::string& refStr = str; 

	// Phrase temoin 
	std::cout << "Voici ma string de base : " << str << std::endl;
	std::cout << "L'adresse ma string de base est : " << &str << std::endl;
	
	// Modification de la phrase via pointeur 
	*ptrStr += " ok mon gars";
	std::cout << "Voici ma string modifier par pointeur  : " << *ptrStr << std::endl;
	std::cout << "Elle est a cette adresse : " << &ptrStr << std::endl;

	// Modification de la phrase via référence
	refStr += " bienvu la ref";
	std::cout << "Voici ma string modifier par ref  : " << refStr << std::endl;
	std::cout << "L'adresse de ma référence est : " << &refStr << std::endl;
	
	return (0);
}
