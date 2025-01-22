/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 22:06:12 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/22 01:46:55 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::	Sed()
{
	std::cout << "Constructor called " << std::endl;
}

Sed::	~Sed()
{
	std::cout << "Destructor called " << std::endl;
}

// Il faut lire chaque ligne avec getline et chercher
// a l'interieur les mots qui nous interessent et les remplacer par d'autre.
// std::string::find permet de retourner la pos du 1er caractere trouve.
std::string	Sed::findString(std:: string find) const
{
	
}

// Deplacer la partie gestion d'erreur dans le main ou faire une fonction adequate.
std::string	Sed::findAndCopy(std::ifstream& file, std::string str, std::string dest)
{
	if (!file)
	{
		std::cout << "Can't open file " << std::endl;
		return ;
	}
		
}