/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:03:22 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:33:09 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int main()
{
	const int size = 10;
	
	AAnimal*	animals[size];
	Brain	myBrain;

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
