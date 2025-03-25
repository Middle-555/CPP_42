/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:09:20 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:33:37 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main(void)
{
    // 1) Constructeur par défaut
    ClapTrap defaultClap;
    std::cout << "defaultClap: " << defaultClap << std::endl;

    // 2) Constructeur avec nom
    ClapTrap alice("Alice");
    ClapTrap bob("Bob");

    std::cout << "alice: " << alice << std::endl;
    std::cout << "bob:   " << bob << std::endl;

    // 3) Attaque et dégâts
    alice.attack("Bob");
    bob.takeDamage(alice.getAttackDamage());
    std::cout << "bob after taking damage: " << bob << std::endl;

    // 4) Réparation
    bob.beRepaired(2);

    // 5) Énergie trop basse pour attaquer / attaque dans le vide 
    for (int i = 0; i < 10; i++)
        alice.attack("Bob");
    // Ici, Alice aura épuisé ses Energy Points
    std::cout << "alice after multiple attacks: " << alice << std::endl;

    // 6) Test du copy constructor
    ClapTrap cloneOfBob(bob);
    std::cout << "cloneOfBob (copy of bob): " << cloneOfBob << std::endl;

    // 7) Test de l'opérateur d'affectation
    ClapTrap assignedClap;
    assignedClap = alice;
    std::cout << "assignedClap (assigned from alice): " << assignedClap << std::endl;

    return 0;
}
