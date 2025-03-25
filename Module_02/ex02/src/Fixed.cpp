/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:22:08 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 14:59:35 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::	Fixed() : _fixedValue(0)
{
}

Fixed::	Fixed(const int n)
{
	this->_fixedValue = n * (1 <<_fixedBits);
	return ;
}
Fixed::	Fixed(const float f)
{
	this->_fixedValue = static_cast<int>(roundf(f * (1 << _fixedBits)));
	return ;
}

Fixed::	~Fixed()
{
}

Fixed &Fixed ::operator=(Fixed const &other)
{
	if (this != &other)
		this->_fixedValue = other.getRawBits();
	return (*this);
}

Fixed::	Fixed ( Fixed const &other)
{
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
	return Fixed(this->toFloat() + others.toFloat());
}

Fixed	Fixed:: operator-(const Fixed &others)
{
	return Fixed(this->toFloat() - others.toFloat());
}

Fixed	Fixed:: operator*(const Fixed &others)
{
	return Fixed(this->toFloat() * others.toFloat());
}

Fixed	Fixed:: operator/(const Fixed &others)
{
	float divisor = others.toFloat();

	if (divisor == 0.0f)
	{
		std::cout << "Error: division by zero" << std::endl;
		return (Fixed(0));
	}
	return Fixed(this->toFloat() / others.toFloat());
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
	Fixed	tmp = (*this);
	
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
	Fixed	tmp = (*this);
	
	this->_fixedValue--;
	return (tmp);
}


Fixed& Fixed::min(Fixed& n, Fixed& n2)
{

	if (n._fixedValue > n2._fixedValue)
		return n2;
	else 
		return n;
}

const Fixed& Fixed::min(const Fixed& n, const Fixed& n2)
{

	if (n._fixedValue > n2._fixedValue)
		return n2;
	else 
		return n;
}

Fixed& Fixed::max(Fixed& n, Fixed& n2)
{
	if (n._fixedValue < n2._fixedValue)
		return n2;
	else 
		return n;
}

const Fixed& Fixed::max(const Fixed& n, const Fixed& n2)
{

	if (n._fixedValue < n2._fixedValue)
		return n2;
	else 
		return n;
}
