/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:03:16 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/21 15:40:17 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::	Weapon(std::string type)
{
	std::cout << "Constructor called" << std::endl;
}

Weapon::	~Weapon()
{
	std::cout << "Destructor called" << std::endl;
}

std::string 	&Weapon:: getType(std::string type) const
{
	return (type);
}


void	Weapon::setType(std::string newType)
{
	_type = newType;
}