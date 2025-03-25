/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:54:13 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:36:03 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "Constructor called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructor called" << std::endl;
}

void	HumanB:: attack()
{
	if (_weapon)
		std::cout << _name << " attack with " << _weapon->getType() << std::endl ;
	else
		std::cout << _name << " has no weapon" << std::endl;
}

void	HumanB::	setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
