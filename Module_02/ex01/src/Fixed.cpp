/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 20:26:48 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/28 21:22:10 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::	Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::	~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
	return ;
}

Fixed::	Fixed ( Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed ::operator=(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
		//
	return (*this);
}
