/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:05:17 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:32:15 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"

Cat::	Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}
Cat::	~Cat()
{
	std::cout << "Cat Virtual destructor called" << std::endl;
	return ;
}

Cat::	Cat(Cat const &other) : Animal(other)
{
	std::cout << "Default Cat Copy Called" << std::endl;
	*this = other;
}
Cat &Cat :: operator=(Cat const &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();	
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
	return ;
}
