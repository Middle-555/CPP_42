/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:50:06 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/06 14:00:23 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

wrongCat::	wrongCat()
{
	std::cout << "wrongCat Default constructor called" << std::endl;
	this->_type = "wrongCat";
	return ;
}
wrongCat::	~wrongCat()
{
	std::cout << "wrongCat default destructor called" << std::endl;
	return ;
}

wrongCat::	wrongCat(wrongCat const &other) : wrongAnimal(other)
{
	std::cout << "Default wrongCat Copy Called" << std::endl;
	*this = other;
}
wrongCat &wrongCat :: operator=(wrongCat const &other)
{
	std::cout << "wrongCat Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();	
	return (*this);
}

void	wrongCat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
	return ;
}