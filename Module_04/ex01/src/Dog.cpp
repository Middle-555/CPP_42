/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:43 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/30 16:30:39 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Brain.hpp"
#include "../include/Dog.hpp"

Dog::	Dog()
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->_type = "Dog";
	_brain = new(Brain);
	return ;
}

Dog :: ~Dog()
{
	std::cout << "Dog Virtual Default Destructor Called" << std::endl;
	delete(_brain);
	return ;
}

Dog:: Dog(Dog const &other) : Animal(other)
{
	std::cout << "Default Dog copy called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Dog &Dog :: operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete(this->_brain);
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
	return ;
}

void Dog::setIdea(int index, const std::string& idea)
{
	if (_brain)
		_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	if (_brain)
		return _brain->getIdea(index);
	return "";
}