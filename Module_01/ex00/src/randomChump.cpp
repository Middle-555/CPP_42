/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:58:03 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:35:32 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

// randomChump creer le zombie sur la stack car il ne doit pas
// sortir du scope de la fonction.
// une fois la fonction fini il est detruit.
void	randomChump(std::string name)
{
	Zombie stackZombie(name);
	stackZombie.announce();
}
