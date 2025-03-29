/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 13:58:06 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 16:59:56 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice Constructor Called" << std::endl;
	return ;
}

Ice::~Ice()
{
	//std::cout << "Ice Destructor Called" << std::endl;
	return ;
}


Ice:: Ice(Ice const &other) : AMateria(other)
{
	//std::cout << "Ice Copy Constructor Called " << std::endl;
	*this = other;
}

Ice &Ice:: operator=(Ice const &other)
{
	//std::cout << "Ice Copy assignment operator called " << std::endl;
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

