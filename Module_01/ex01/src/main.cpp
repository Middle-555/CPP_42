/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:49:05 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:35:41 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main()
{
	int	hordeNumber = 5;

	Zombie *horde = zombieHorde(hordeNumber, "Maitre Gims");
	for (int i = 0; i < hordeNumber ; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
