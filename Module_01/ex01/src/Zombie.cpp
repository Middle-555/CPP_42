/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:49:26 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/26 13:01:29 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << getName() << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::	~Zombie()
{
	std::cout << _name << " destroyed "<< std::endl;
}

Zombie::	Zombie() : _name("Brigitte")
{
}

void	Zombie:: setName(std::string name)
{
	this->_name = name;
}

std::string	Zombie::getName() const
{
	return _name;
}
