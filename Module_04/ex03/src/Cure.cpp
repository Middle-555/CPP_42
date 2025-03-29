/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 13:58:11 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 16:59:47 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure Constructor Called" << std::endl;
	return ;
}

Cure::~Cure()
{
	//std::cout << "Cure Destructor Called" << std::endl;
	return ;
}

Cure:: Cure(Cure const &other) : AMateria(other)
{
	//std::cout << "Cure Copy Constructor Called " << std::endl;
	*this = other;
}

Cure &Cure:: operator=(Cure const &other)
{
	//std::cout << "Cure Copy assignment operator called " << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}

