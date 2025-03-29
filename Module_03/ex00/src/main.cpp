/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:09:20 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/28 12:11:21 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

#define RESET		"\033[0m"
#define GREEN		"\033[32m"
#define BLUE		"\033[34m"
#define RED			"\033[31m"
#define CYAN		"\033[36m"

int main(void)
{
	std::cout << GREEN << "\n🛠️  Test 1 : Constructeur par défaut\n" << RESET;
	ClapTrap defaultClap;
	std::cout << CYAN << "defaultClap: " << defaultClap << RESET << std::endl;

	std::cout << GREEN << "\n🛠️  Test 2 : Constructeurs avec nom\n" << RESET;
	ClapTrap Tom("Tom");
	ClapTrap Max("Max");
	std::cout << CYAN << "Tom: " << Tom << RESET << std::endl;
	std::cout << CYAN << "Max: " << Max << RESET << std::endl;

	std::cout << GREEN << "\n⚔️  Test 3 : Tom attaque Max\n" << RESET;
	Tom.attack("Max");
	Max.takeDamage(Tom.getAttackDamage());
	std::cout << CYAN << "Max après avoir reçu l'attaque : " << Max << RESET << std::endl;

	std::cout << GREEN << "\n🛠️  Test 4 : Max tente de se réparer\n" << RESET;
	Max.beRepaired(2);
	std::cout << CYAN << "Max après réparation : " << Max << RESET << std::endl;

	std::cout << GREEN << "\n💀 Test 5 : Max tente d'attaquer avec 0 HP\n" << RESET;
	std::cout << CYAN << "État de Max : " << Max << RESET << std::endl;
	Max.attack("Tom");

	std::cout << GREEN << "\n⚡ Test 6 : Tom vide son énergie en attaquant\n" << RESET;
	for (int i = 0; i < 10; i++)
		Tom.attack("Max");
	std::cout << CYAN << "Tom après plusieurs attaques : " << Tom << RESET << std::endl;

	std::cout << GREEN << "\n🧬 Test 7 : Constructeur de copie\n" << RESET;
	ClapTrap cloneOfMax(Max);
	std::cout << CYAN << "cloneOfMax (copie de Max) : " << cloneOfMax << RESET << std::endl;

	std::cout << GREEN << "\n🔁 Test 8 : Opérateur d’affectation\n" << RESET;
	ClapTrap assignedClap;
	assignedClap = Tom;
	std::cout << CYAN << "assignedClap (copié depuis Tom) : " << assignedClap << RESET << std::endl;

	std::cout << GREEN << "\n✅ Tous les tests sont terminés.\n" << RESET;

	return 0;
}
