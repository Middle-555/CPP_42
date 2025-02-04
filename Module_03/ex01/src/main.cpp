/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:00:21 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/04 16:42:19 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap Bob("Bob");
	ScavTrap Marc("Marc");

	Bob.attack("Marc");
	Marc.takeDamage(10);
	Marc.beRepaired(9);
	Marc.attack("Bob");
	Bob.takeDamage(20);

	for (int i = 0; i < 50 ; i++)
		Bob.attack("Marc");
	std::cout << "Bob: " << Bob << std::endl;
	Marc.guardGate();
}
