/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:43 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/05 14:25:25 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::	Dog()
{
	std::cout << "Default Dog Constructor Called" << std::endl;
	return ;
}

Dog::	~Dog()
{
	std::cout << "Default Dog Destructor Called" << std::endl;
	return ;
}

Dog::	Dog(Dog const &other)
{
	std::cout << "Default Dog Copy Called" << std::endl;
	*this = other;
}

Dog &Dog :: operator=(Animal const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();	
	return (*this);
}