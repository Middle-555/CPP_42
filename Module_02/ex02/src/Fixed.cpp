/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:22:08 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/30 19:29:10 by kpourcel         ###   ########.fr       */
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
