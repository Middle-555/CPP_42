/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 00:24:22 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/28 18:03:50 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int			_fixedValue;
	int const static 	_fixedBits = 8; // valeur littéral du nombre de bits reservé a la partie fractionnaire.
public:
	Fixed();
	~Fixed();
	Fixed ( Fixed const & src);
	Fixed(int n);
	int	getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed &	operator=(Fixed const & src);
};

#endif