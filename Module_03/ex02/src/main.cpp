/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:00:21 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:34:03 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void)
{
	ClapTrap Bob("Bob");
	ScavTrap Marc("Marc");
	FragTrap Tom("Tom");

	Tom.highFivesGuys();
	Bob.attack("Marc");
	Marc.takeDamage(10);
	Marc.beRepaired(9);
	Marc.attack("Bob");
	Bob.takeDamage(20);
	Tom.attack("Marc");
	Marc.takeDamage(30);
	
	for (int i = 0; i < 50 ; i++)
		Bob.attack("Marc");
	std::cout << "Bob: " << Bob << std::endl;
	Marc.guardGate();
}
