/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:06:43 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 15:26:04 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
	return ;
}

AMateria::	AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria Parameter Constructor Called" << std::endl;
	return ;
}

AMateria::~AMateria()
{
	std::cout << "AMateria default destructor called" << std::endl;
	return ;
}

AMateria:: AMateria(AMateria const &other)
{
	std::cout << "AMateria Copy Called " << std::endl;
	*this = other;
}

AMateria &AMateria:: operator=(AMateria const &other)
{
	std::cout << "AMateria Copy assignment operator called " << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

std::string const &AMateria:: getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* uses an unknown materia on " << target.getName() << " *" << std::endl;
}
