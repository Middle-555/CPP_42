/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:17:18 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:35:34 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

// Le fait d'utiliser ": name(name)"permet d'initialiser a la creation
// sans avoir a faire this->name = name;
// gain de performance et utile si const.
Zombie::	Zombie(std::string name) : name(name)
{
}

// 
Zombie::	~Zombie()
{
	std::cout << name << " destroyed"<< std::endl;
}
