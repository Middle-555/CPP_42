/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:49:59 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:33:12 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

wrongAnimal:: wrongAnimal()
{
	std::cout << "Default wrongAnimal Constructor Called" << std::endl;
	this->_type = "wrongAnimal";
	return ;
}

wrongAnimal::	~wrongAnimal()
{
	std::cout << "Default wrongAnimal Destructor Called" << std::endl;
	return ;
}
wrongAnimal::	wrongAnimal(wrongAnimal const &other)
{
	std::cout << "Default wrongAnimal Copy Called" << std::endl;
	*this = other;
}
wrongAnimal  &wrongAnimal :: operator=(wrongAnimal const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();	
	return (*this);
}

std::string const &wrongAnimal::  getType() const
{
	return (this->_type);
}

void	wrongAnimal::makeSound()const
{
	std::cout << "wrongAnimal sound" << std::endl;
	return ;
}
