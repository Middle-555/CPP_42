/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:06:29 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 17:02:41 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"
#include "../include/ICharacter.hpp"
#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

#define RESET       "\033[0m"
#define GREEN       "\033[1;32m"
#define RED         "\033[1;31m"
#define CYAN        "\033[1;36m"
#define YELLOW      "\033[1;33m"
#define MAGENTA     "\033[1;35m"

int main()
{
	std::cout << CYAN << "🌟 TEST 1 : Main obligatoire du sujet 🌟" << RESET << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << "\n" << CYAN << "🌟 TEST 2 : Overflow de l'inventaire + création inconnue 🌟" << RESET << std::endl;
	MateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());

	// Trop de learn (doit être ignoré)
	src2->learnMateria(new Ice());

	Character* mike = new Character("mike");

	mike->equip(src2->createMateria("ice"));
	mike->equip(src2->createMateria("cure"));
	mike->equip(src2->createMateria("ice"));
	mike->equip(src2->createMateria("cure"));

	// Trop d’equip (doit être ignoré)
	mike->equip(src2->createMateria("ice"));

	std::cout << "\n" << CYAN << "🌟 TEST 3 : Unequip et fuite mémoire 🌟" << RESET << std::endl;
	mike->unequip(1);
	mike->unequip(0);
	mike->unequip(3); // OK
	mike->unequip(4); // Hors limite (ignoré)
	mike->use(0, *mike); // Slot vide
	mike->use(2, *mike); // Slot 2 encore actif

	std::cout << "\n" << CYAN << "🌟 TEST 4 : Deep Copy 🌟" << RESET << std::endl;
	Character* clone = new Character(*mike);
	std::cout << MAGENTA << "Clone utilise ses materias :" << RESET << std::endl;
	clone->use(2, *mike); // Test de copie

	delete clone;
	delete mike;
	delete src2;

	std::cout << GREEN << "\n✅ Fin des tests\n" << RESET;
	return 0;
}
