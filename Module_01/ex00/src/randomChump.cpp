/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:58:03 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/17 14:36:40 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// randomChump creer le zombie sur la stack car il ne doit pas
// sortir du scope de la fonction.
// une fois la fonction fini il est detruit.
void	randomChump(std::string name)
{
	Zombie stackZombie(name);
	stackZombie.announce();
}
