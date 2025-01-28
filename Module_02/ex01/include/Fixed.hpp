/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 20:25:48 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/28 21:30:45 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIXED_HPP
# define 	FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:

public:
	Fixed();
	Fixed(const int n);
	Fixed ( Fixed const &other);
	~Fixed();
	Fixed &	operator=(Fixed const &other);
	float toFloat( void ) const;
	int toInt( void ) const;
};

#endif