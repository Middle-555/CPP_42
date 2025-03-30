/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:03:22 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/30 17:28:20 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

void separator(const std::string& title)
{
	std::cout << "\n" << YELLOW << "━━━━━━━━━━━ " << title << " ━━━━━━━━━━━" << RESET << "\n";
}

int main()
{
	separator("TEST POLYMORPHISME AVEC AANIMAL");

	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	std::cout << CYAN << "Dog type: " << dog->getType() << RESET << std::endl;
	std::cout << CYAN << "Cat type: " << cat->getType() << RESET << std::endl;

	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;

	separator("TEST TABLEAU D'AANIMAL");

	const int size = 4;
	AAnimal* zoo[size];

	for (int i = 0; i < size; ++i)
	{
		if (i % 2 == 0)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}

	for (int i = 0; i < size; ++i)
		zoo[i]->makeSound();

	for (int i = 0; i < size; ++i)
		delete zoo[i];

	separator("TEST DEEP COPY DOG");

	Dog dog1;
	dog1.setIdea(0, "Protect the house");
	dog1.setIdea(1, "Play with the ball");

	Dog dog2 = dog1;
	dog2.setIdea(0, "Sleep");

	std::cout << MAGENTA << "Dog1 idea[0]: " << dog1.getIdea(0) << RESET << std::endl;
	std::cout << MAGENTA << "Dog2 idea[0]: " << dog2.getIdea(0) << RESET << std::endl;

	separator("TEST DEEP COPY CAT");

	Cat cat1;
	cat1.setIdea(0, "Nap on the sofa");
	cat1.setIdea(1, "Scratch furniture");

	Cat cat2(cat1);
	cat2.setIdea(1, "Stare at the wall");

	std::cout << MAGENTA << "Cat1 idea[1]: " << cat1.getIdea(1) << RESET << std::endl;
	std::cout << MAGENTA << "Cat2 idea[1]: " << cat2.getIdea(1) << RESET << std::endl;
	// AAnimal test; //  Ceci ne compile pas si la classe est abstraite

	separator("FIN DES TESTS");
}
