/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:03:22 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/30 16:34:11 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"


#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"
#define MAGENTA "\033[35m"

void printSeparator(std::string const &title)
{
	std::cout << std::endl
	          << YELLOW << "━━━━━━━━━━━━━━━━━━━━━━━ " << title << " ━━━━━━━━━━━━━━━━━━━━━━━" << RESET
	          << std::endl;
}

int main()
{
	printSeparator("TEST POLYMORPHISME DE BASE");
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << CYAN << "Dog is of type: " << dog->getType() << RESET << std::endl;
	std::cout << CYAN << "Cat is of type: " << cat->getType() << RESET << std::endl;

	std::cout << GREEN << "Dog makes sound: "; dog->makeSound(); std::cout << RESET;
	std::cout << GREEN << "Cat makes sound: "; cat->makeSound(); std::cout << RESET;

	delete dog;
	delete cat;

	printSeparator("TEST TABLEAU D'ANIMAUX");
	const int nb = 4;
	Animal* animals[nb];

	for (int i = 0; i < nb; ++i)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < nb; ++i)
		animals[i]->makeSound();

	for (int i = 0; i < nb; ++i)
		delete animals[i];

	printSeparator("TEST DEEP COPY DOG");
	Dog basicDog;
	basicDog.setIdea(0, "Chase the cat");
	basicDog.setIdea(1, "Bark at the mailman");

	Dog copyDog = basicDog;
	copyDog.setIdea(0, "Sleep all day");

	std::cout << MAGENTA << "Original Dog idea 0: " << basicDog.getIdea(0) << RESET << std::endl;
	std::cout << MAGENTA << "Copy Dog idea 0:     " << copyDog.getIdea(0) << RESET << std::endl;

	printSeparator("TEST DEEP COPY CAT");
	Cat basicCat;
	basicCat.setIdea(0, "Sleep on the keyboard");
	basicCat.setIdea(1, "Knock things off the table");

	Cat copyCat(basicCat);
	copyCat.setIdea(1, "Hide in a box");

	std::cout << MAGENTA << "Original Cat idea 1: " << basicCat.getIdea(1) << RESET << std::endl;
	std::cout << MAGENTA << "Copy Cat idea 1:     " << copyCat.getIdea(1) << RESET << std::endl;
		
	printSeparator("TEST wrongAnimal / wrongCat SANS VIRTUAL");

	const wrongAnimal* generic = new wrongAnimal();
	const wrongAnimal* notReallyCat = new wrongCat();
	const wrongCat* realwrongCat = new wrongCat();

	std::cout << CYAN << "generic type:        " << generic->getType() << RESET << std::endl;
	std::cout << CYAN << "notReallyCat type:   " << notReallyCat->getType() << RESET << std::endl;
	std::cout << CYAN << "realwrongCat type:   " << realwrongCat->getType() << RESET << std::endl;

	std::cout << GREEN << "generic sound:       "; generic->makeSound(); std::cout << RESET;
	std::cout << GREEN << "notReallyCat sound:  "; notReallyCat->makeSound(); std::cout << RESET;
	std::cout << GREEN << "realwrongCat sound:  "; realwrongCat->makeSound(); std::cout << RESET;

	delete realwrongCat;
	delete notReallyCat;
	delete generic;

	printSeparator("FIN DES TESTS");

	return 0;
}