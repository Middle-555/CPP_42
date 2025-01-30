/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:22:19 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/30 19:30:51 by kpourcel         ###   ########.fr       */
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
	~Fixed();
	Fixed ( Fixed const &other);
	Fixed &	operator=(Fixed const &other);
	int	getRawBits( void ) const;
	void	setRawBits(int const raw);
};
std::ostream	&operator<<(std::ostream &os, const Fixed &Fixed);


#endif