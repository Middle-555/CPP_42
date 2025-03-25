/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:43 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:33:01 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include "../include/Brain.hpp"
#include "../include/Dog.hpp"

Dog::	Dog()
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->_type = "Dog";
	brain = new(Brain);
	return ;
}

Dog :: ~Dog()
{
	std::cout << "Dog Default Destructor Called" << std::endl;
	delete(brain);
	return ;
}

Dog:: Dog(Dog const &other) : AAnimal(other)
{
	std::cout << "Default Dog copy called" << std::endl;
	this->brain = new Brain(*other.brain);
}

Dog &Dog :: operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AAnimal::operator=(other); // copie l'heritage
		delete(this->brain);
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
	return ;
}