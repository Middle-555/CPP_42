/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:05:17 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:32:57 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include "../include/Brain.hpp"
#include "../include/Cat.hpp"

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

Cat::	Cat(Cat const &other) : AAnimal(other)
{
	std::cout << "Default Cat Copy Called" << std::endl;
	this->brain = new Brain(*other.brain); // copie profonde
}

Cat &Cat :: operator=(Cat const &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		AAnimal::operator=(other); // copie l'heritage
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
