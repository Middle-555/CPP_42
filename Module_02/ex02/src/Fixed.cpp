/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:22:08 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/31 18:20:46 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

Fixed &Fixed ::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixedValue = other.getRawBits();
	return (*this);
}

Fixed::	Fixed ( Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
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

// Operateur arithmetique
Fixed	Fixed:: operator+(const Fixed &others)
{
	return Fixed(this->toFloat()) + others.toFloat();
}

Fixed	Fixed:: operator-(const Fixed &others)
{
	return Fixed(this->toFloat()) - others.toFloat();
}

Fixed	Fixed:: operator*(const Fixed &others)
{
	return Fixed(this->toFloat()) * others.toFloat();
}

Fixed	Fixed:: operator/(const Fixed &others)
{
	float divisor = others.toFloat();

	if (divisor == 0.0f)
	{
		std::cout << "Error: division by zero" << std::endl;
		return (Fixed(0));
	}
	return Fixed(this->toFloat()) / others.toFloat();
}

// Operateur de comparaison 
// Le retour est toujours un bool 
bool	Fixed:: operator==(const Fixed &others)
{
	return (this->_fixedValue == others._fixedValue);
}

bool	Fixed:: operator!=(const Fixed &others)
{
	return (this->_fixedValue != others._fixedValue);
}

bool	Fixed:: operator>=(const Fixed &others)
{
	return (this->_fixedValue >= others._fixedValue);
}

bool	Fixed:: operator<=(const Fixed &others)
{
	return (this->_fixedValue <= others._fixedValue);
}

bool	Fixed:: operator>(const Fixed &others)
{
	return (this->_fixedValue > others._fixedValue);
}

bool	Fixed:: operator<(const Fixed &others)
{
	return (this->_fixedValue < others._fixedValue);
}

// Operateurs unaires
// 2 type d'incrementation celle avec temp qui retourne le l'objet avant incrementation
// Celle qui retourne une ref vers l'objet 

Fixed	&Fixed::operator++(void)
{
	this->_fixedValue++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = this->_fixedValue;
	
	this->_fixedValue++;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->_fixedValue--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = this->_fixedValue;
	
	this->_fixedValue--;
	return (tmp);
}
