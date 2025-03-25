/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:03:16 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:36:12 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::	Weapon(std::string type) : _type(type)
{
	std::cout << "Constructor called" << std::endl;
}

Weapon::	~Weapon()
{
	std::cout << "Destructor called" << std::endl;
}

const std::string 	&Weapon:: getType() const
{
	return (_type);
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}