/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:05:17 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/24 17:37:24 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

Cat::	Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "Cat";
	brain = new(Brain);
	return ;
}
Cat::	~Cat()
{
	std::cout << "Cat Virtual destructor called" << std::endl;
	delete (brain);
	return ;
}

Cat::	Cat(Cat const &other) : Animal(other)
{
	std::cout << "Default Cat Copy Called" << std::endl;
	this->brain = new Brain(*other.brain); // copie profonde
}

Cat &Cat :: operator=(Cat const &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other); // copie l'heritage
		delete(this->brain);
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
	return ;
}
