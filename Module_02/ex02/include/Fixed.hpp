/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:22:19 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/31 16:59:48 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIXED_HPP
# define 	FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int const static 	_fixedBits = 8; 
	int			_fixedValue;
public:
	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	Fixed ( Fixed const &other);
	~Fixed();
	Fixed &	operator=(Fixed const &other);
	int	getRawBits( void ) const;
	void	setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;

// Operateurs arithmetique 
	Fixed	operator+(const Fixed &others);
	Fixed	operator-(const Fixed &others);
	Fixed	operator*(const Fixed &others);
	Fixed	operator/(const Fixed &others);

// Operateurs de comparaison
	bool	operator==(const Fixed &others);
	bool	operator!=(const Fixed &others);
	bool	operator>=(const Fixed &others);
	bool	operator<=(const Fixed &others);
	bool	operator>(const Fixed &others);
	bool	operator<(const Fixed &others);

// Operateurs d'incrementation 

Fixed	& operator++(void);
Fixed	operator++(int);
Fixed	& operator--(void);
Fixed	 operator--(int);
};
std::ostream	&operator<<(std::ostream &os, const Fixed &Fixed);


#endif