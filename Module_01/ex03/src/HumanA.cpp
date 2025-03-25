/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:54:06 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:36:01 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::	HumanA(std::string name, Weapon &weapon) : _name(name) , _weapon(weapon)
{
	std::cout << "Constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor called" << std::endl;
}

void	HumanA:: attack()
{
	std::cout << _name << " attack with " << _weapon.getType() << std::endl ;
}