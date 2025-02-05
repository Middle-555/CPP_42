/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:43 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/05 16:04:44 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"


Dog::	Dog()
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog :: ~Dog()
{
	std::cout << "Dog Default Destructor Called" << std::endl;
	return ;
}

Dog:: Dog(Dog const &other) : Animal(other)
{
	std::cout << "Default Dog copy called" << std::endl;
	*this = other;
}

Dog &Dog :: operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();	
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
	return ;
}