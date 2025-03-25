/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:21 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:32:51 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::	AAnimal()
{
	std::cout << "Default AAnimal Constructor Called" << std::endl;
	this->_type = "Animal";
	return ;
}

AAnimal::	~AAnimal()
{
	std::cout << "Default Virtual AAnimal Destructor Called" << std::endl;
	return ;
}

AAnimal::	AAnimal(AAnimal const &other)
{
	std::cout << "Default AAnimal Copy Called" << std::endl;
	*this = other;
}

AAnimal &AAnimal :: operator=(AAnimal const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();	
	return (*this);
}

std::string const &AAnimal::  getType() const
{
	return (this->_type);
}
