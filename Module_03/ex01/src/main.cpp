/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:00:21 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 11:00:59 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

// 🎨 Couleurs terminal
#define RESET	"\033[0m"
#define GREEN	"\033[32m"
#define CYAN	"\033[36m"
#define RED	"\033[31m"
#define YELLOW	"\033[33m"

int	main(void)
{
	std::cout << GREEN << "\n🛠️  Création des personnages\n" << RESET;
	ClapTrap Bob("Bob");
	ScavTrap Marc("Marc");

	std::cout << CYAN << "État initial - Bob : " << Bob << RESET << std::endl;
	std::cout << CYAN << "État initial - Marc : " << Marc << RESET << std::endl;

	std::cout << GREEN << "\n⚔️  Tour 1 : Bob attaque Marc\n" << RESET;
	Bob.attack("Marc");
	Marc.takeDamage(Bob.getAttackDamage());
	std::cout << YELLOW << "Bob après avoir attaqué : " << Bob << RESET << std::endl;
	std::cout << GREEN << "\n🛠️  Tour 2 : Marc se répare\n" << RESET;
	Marc.beRepaired(9);

	std::cout << GREEN << "\n⚔️  Tour 3 : Marc contre-attaque\n" << RESET;
	Marc.attack("Bob");
	Bob.takeDamage(Marc.getAttackDamage());

	std::cout << GREEN << "\n⚡ Tour 4 : Bob essaye d'attaqué sans hp\n" << RESET;
	for (int i = 0; i < 3; i++)
		Bob.attack("Marc");
	std::cout << YELLOW << "Bob après sa tentative : " << Bob << RESET << std::endl;

	std::cout << GREEN << "\n🛡️  Spécial ScavTrap : Mode garde\n" << RESET;
	Marc.guardGate();

	std::cout << GREEN << "\n🧬 Test : Constructeur de copie\n" << RESET;
	ScavTrap CopyMarc(Marc);
	std::cout << CYAN << "CopyMarc (copie de Marc) : " << CopyMarc << RESET << std::endl;

	std::cout << GREEN << "\n🔁 Test : Opérateur d’assignation\n" << RESET;
	ScavTrap AnotherMarc;
	AnotherMarc = Marc;
	std::cout << CYAN << "AnotherMarc (assigné depuis Marc) : " << AnotherMarc << RESET << std::endl;

	std::cout << GREEN << "\n💀 Cas limite : attaque sans HP / réparation sans HP\n" << RESET;
	ScavTrap DeadGuy("Ghost");
	DeadGuy.takeDamage(200);          // Le met à 0 HP
	DeadGuy.attack("Bob");            // Ne devrait pas fonctionner
	DeadGuy.beRepaired(5);            // Ne devrait pas fonctionner non plus

	std::cout << GREEN << "\n⚠️ Cas limite : attaque sans énergie\n" << RESET;
	ScavTrap Tired("Sleepy");
	for (int i = 0; i < 50; i++)
		Tired.attack("Bob");
	std::cout << YELLOW << "Sleepy en fin de combat : " << Tired << RESET << std::endl;
	Tired.attack("Bob");
	std::cout << YELLOW << "Sleepy en fin de combat : " << Tired << RESET << std::endl;

	std::cout << GREEN << "\n✅ Fin du test ex01\n" << RESET;
	return 0;
}
