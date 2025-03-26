/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:17:18 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/26 12:24:37 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

// Le fait d'utiliser ": name(name)"permet d'initialiser a la creation
// sans avoir a faire this->name = name;
// gain de performance et utile si const.
Zombie::	Zombie(std::string name) : _name(name)
{
}

// 
Zombie::	~Zombie()
{
	std::cout << _name << " destroyed"<< std::endl;
}
