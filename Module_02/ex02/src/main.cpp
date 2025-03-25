/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:21:36 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:35:00 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main( void ) 
{
	Fixed	a;
	Fixed	const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "Test d'opération mon gars " << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << a * b << std::endl;
	return 0;
}
