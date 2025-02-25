/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:03:22 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/25 15:24:26 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const int size = 10;
	
	Animal*	animals[size];
	Brain	myBrain;
	Animal* Animaltest;

	Animaltest = new Animal;
	std::cout <<"test animal standard"<< std::endl;
	Animaltest->makeSound();

	myBrain.setIdea(0, "Test de l'idea");
	std::cout << "Idea 0 : " << myBrain.getIdea(0) << std::endl;
	std::cout << "Idea 1 : " << myBrain.getIdea(1) << std::endl;
	std::cout << "Idea 230 : " << myBrain.getIdea(230) << std::endl;

	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();
	for (int i = 0; i < size ; i++)
		animals[i]->makeSound();
	for (int i = 0; i < size ; i++)
		delete(animals[i]);
	return (0);
}
