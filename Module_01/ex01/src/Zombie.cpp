/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:49:26 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:35:44 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

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
