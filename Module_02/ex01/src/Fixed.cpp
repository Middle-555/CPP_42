/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 20:26:48 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/31 12:06:38 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::	Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::	Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = n * (1 <<_fixedBits);
	return ;
}
Fixed::	Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = static_cast<int>(roundf(f * (1 << _fixedBits)));
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
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixedValue = other.getRawBits();
	return (*this);
}

int	Fixed:: getRawBits( void ) const
{
	return (this->_fixedValue);
}

void	Fixed:: setRawBits( int const raw )
{
	this->_fixedValue = raw;
}
float	Fixed:: toFloat( void ) const
{
	return static_cast<float>(this->_fixedValue) / (1 << _fixedBits);
}

int	Fixed:: toInt( void ) const
{
	return this->_fixedValue >> _fixedBits;
}

std::ostream &operator<<(std::ostream &os, Fixed const &Fixed)
{
	os << Fixed.toFloat();
	return (os);
}
