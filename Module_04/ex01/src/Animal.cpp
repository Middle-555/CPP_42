/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:21 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/05 15:52:39 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::	Animal()
{
	std::cout << "Default Animal Constructor Called" << std::endl;
	this->_type = "Animal";
	return ;
}

Animal::	~Animal()
{
	std::cout << "Default Virtual Animal Destructor Called" << std::endl;
	return ;
}

Animal::	Animal(Animal const &other)
{
	std::cout << "Default Animal Copy Called" << std::endl;
	*this = other;
}

Animal &Animal :: operator=(Animal const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();	
	return (*this);
}

std::string const &Animal::  getType() const
{
	return (this->_type);
}

void	Animal:: makeSound() const
{
	std::cout << "Generic animal sound" << std::endl;
}
