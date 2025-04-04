/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:57:50 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:35:29 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

// Creer un zombie grace a new en utilisant le constructeur de la classe zombie
// Retourne un pointeur vers le zombie.
Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}