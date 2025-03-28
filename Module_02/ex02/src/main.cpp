/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:21:36 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/28 10:47:44 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main(void)
{
	// ▶️ Construction et test des incréments
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "Valeur initiale de a      : " << a << std::endl;
	std::cout << "Pré-incrémentation (++a)  : " << ++a << std::endl;
	std::cout << "Valeur après (++a)        : " << a << std::endl;
	std::cout << "Post-incrémentation (a++) : " << a++ << std::endl;
	std::cout << "Valeur après (a++)        : " << a << std::endl;

	std::cout << "Valeur de b               : " << b << std::endl;
	std::cout << "Max entre a et b          : " << Fixed::max(a, b) << std::endl;

	// ➕➖ Test des opérations arithmétiques
	std::cout << "\n🧪 Test des opérations arithmétiques" << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;

	// 🔽 Test min()
	std::cout << "\n🧮 Test de min()" << std::endl;
	Fixed low(0.0039f);
	Fixed high(1000.0f);
	std::cout << "min(low, high) = " << Fixed::min(low, high) << std::endl;

	// 🔁 Test des conversions
	std::cout << "\n🔄 Test toInt() / toFloat()" << std::endl;
	Fixed f(42.42f);
	std::cout << "f.toInt()   = " << f.toInt() << std::endl;
	std::cout << "f.toFloat() = " << f.toFloat() << std::endl;

	// ❌ Test division par zéro
	std::cout << "\n⚠️ Test division par zéro" << std::endl;
	Fixed zero;
	std::cout << "a / zero = " << a / zero << std::endl;

	return 0;
}
