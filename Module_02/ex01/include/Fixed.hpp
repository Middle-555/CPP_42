/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 20:25:48 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/30 17:03:32 by kpourcel         ###   ########.fr       */
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
};
std::ostream	&operator<<(std::ostream &os, const Fixed &Fixed);
#endif