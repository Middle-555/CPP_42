/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:49:26 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/20 14:58:23 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::	~Zombie()
{
	std::cout << name << " destroyed"<< std::endl;
}

Zombie::	Zombie()
{
	this->name = "maitre gims";
}

void	Zombie:: setName(std::string name)
{
	this->name = name;
}
