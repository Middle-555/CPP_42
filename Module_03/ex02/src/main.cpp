/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:00:21 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 11:31:25 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

// 🎨 Couleurs terminal
#define RESET	"\033[0m"
#define GREEN	"\033[32m"
#define CYAN	"\033[36m"
#define RED		"\033[31m"
#define YELLOW	"\033[33m"

int	main(void)
{
	std::cout << GREEN << "\n🛠️  Création des personnages\n" << RESET;
	ClapTrap Bob("Bob");
	ScavTrap Marc("Marc");
	FragTrap Laura("Laura");

	std::cout << CYAN << "Bob ClapTrap : " << Bob << RESET << std::endl;
	std::cout << CYAN << "ScavTrap : " << Marc << RESET << std::endl;
	std::cout << CYAN << "FragTrap : " << Laura << RESET << std::endl;

	std::cout << GREEN << "\n⚔️  Combat entre FragTrap et ScavTrap\n" << RESET;
	Laura.attack("Marc");
	Marc.takeDamage(Laura.getAttackDamage());

	std::cout << GREEN << "\n🛡️  Réaction de ScavTrap\n" << RESET;
	Marc.attack("Laura");
	Laura.takeDamage(Marc.getAttackDamage());

	std::cout << GREEN << "\n🍔 FragTrap se soigne\n" << RESET;
	Laura.beRepaired(25);

	std::cout << GREEN << "\n🖐️  Appel de la fonction spéciale : highFivesGuys()\n" << RESET;
	Laura.highFivesGuys();

	std::cout << GREEN << "\n🔁 Test de copie et assignation\n" << RESET;
	FragTrap copyFrag(Laura);
	FragTrap assignedFrag;
	assignedFrag = Laura;

	std::cout << CYAN << "Copie de Laura : " << copyFrag << RESET << std::endl;
	std::cout << CYAN << "Assigné depuis Laura : " << assignedFrag << RESET << std::endl;

	std::cout << GREEN << "\n💀 Cas limite : attaque avec 0 HP\n" << RESET;
	FragTrap ghost("Ghost");
	ghost.takeDamage(150);
	ghost.attack("Marc");

	std::cout << GREEN << "\n⚠️ Cas limite : attaque sans énergie\n" << RESET;
	FragTrap sleepy("Sleepy");
	for (int i = 0; i < 101; ++i)
		sleepy.attack("Bob");
	std::cout << CYAN << "Sleepy apres attaque : " << sleepy << RESET << std::endl;

	std::cout << GREEN << "\n✅ Fin des tests ex02\n" << RESET;
	return 0;
}
