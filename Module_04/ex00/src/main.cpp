/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:03:22 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 17:32:09 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"


#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define BLUE    "\033[34m"
#define PURPLE  "\033[35m"
#define GRAY    "\033[90m"

int main()
{
	std::cout << GREEN << "\n🧪 [TEST] Polymorphisme avec Animal / Dog / Cat\n" << RESET;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << BLUE << "\n🔍 Types :\n" << RESET;
	std::cout << "Dog type: " << j->getType() << std::endl;
	std::cout << "Cat type: " << i->getType() << std::endl;

	std::cout << PURPLE << "\n🔊 Sons :\n" << RESET;
	i->makeSound(); // meow
	j->makeSound(); // woof
	meta->makeSound(); // generic

	std::cout << GRAY << "\n🧹 Suppression Animal / Dog / Cat\n" << RESET;
	delete i;
	delete j;
	delete meta;

	std::cout << RED << "\n🧪 [TEST] Mauvaise hiérarchie avec wrongAnimal / wrongCat\n" << RESET;

	const wrongAnimal* human = new wrongAnimal();
	const wrongAnimal* miaou = new wrongCat();
	const wrongCat* cat = new wrongCat();

	std::cout << BLUE << "\n🔍 Types :\n" << RESET;
	std::cout << "wrongAnimal type: " << human->getType() << std::endl;
	std::cout << "wrongCat (via wrongAnimal*) type: " << miaou->getType() << std::endl;
	std::cout << "wrongCat (via wrongCat*) type: " << cat->getType() << std::endl;

	std::cout << PURPLE << "\n🔊 Sons :\n" << RESET;
	human->makeSound();   // generic
	miaou->makeSound();   // ❌ generic (expected miaou)
	cat->makeSound();     // ✅ miaou

	std::cout << GRAY << "\n🧹 Suppression wrongAnimal / wrongCat\n" << RESET;
	delete cat;
	delete miaou;
	delete human;

	std::cout << GREEN << "\n✅ Fin des tests.\n" << RESET;

	return 0;
}
