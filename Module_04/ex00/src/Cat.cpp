/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:05:17 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/05 14:27:15 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::	Cat()
{
	std::cout << "Default Cat Constructor Called" << std::endl;
	return ;
}

Cat::	~Cat()
{
	std::cout << "Default Cat Destructor Called" << std::endl;
	return ;
}

Cat::	Cat(Cat const &other)
{
	std::cout << "Default Cat Copy Called" << std::endl;
	*this = other;
}

Cat &Cat :: operator=(Animal const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();	
	return (*this);
}

