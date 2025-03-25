/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 00:24:40 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:34:30 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::	Fixed() : _fixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::	Fixed(int n) : _fixedValue(n)
{
	std::cout << "Default  parameter constructor called" << std::endl;
}
Fixed::	~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::	Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed:: operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_fixedValue = src.getRawBits();
	return (*this);
}

int	Fixed:: getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void	Fixed:: setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedValue = raw;
}
