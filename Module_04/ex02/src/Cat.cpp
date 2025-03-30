/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:05:17 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/30 17:24:55 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include "../include/Brain.hpp"
#include "../include/Cat.hpp"

Cat::	Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "Cat";
	_brain = new(Brain);
	return ;
}
Cat::	~Cat()
{
	std::cout << "Cat Virtual destructor called" << std::endl;
	delete (_brain);
	return ;
}

Cat::	Cat(Cat const &other) : AAnimal(other)
{
	std::cout << "Default Cat Copy Called" << std::endl;
	this->_brain = new Brain(*other._brain); // copie profonde
}

Cat &Cat :: operator=(Cat const &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AAnimal::operator=(other);
		delete(this->_brain);
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
	return ;
}

void Cat::setIdea(int index, const std::string& idea)
{
	if (_brain)
		_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
	if (_brain)
		return _brain->getIdea(index);
	return "";
}
