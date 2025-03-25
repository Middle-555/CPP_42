/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:03:22 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:32:25 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	// test sur les classes Animal + dog et cat
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "find type" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "test makeSound" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete(i);
	delete(j);
	delete(meta);
	// test sur les wrong
	std::cout << "test wrongClass" << std::endl;
	const wrongAnimal *human = new wrongAnimal();
	const wrongAnimal *miaou = new wrongCat();
	const wrongCat	*cat = new wrongCat();
	std::cout << "find type" << std::endl;
	std::cout << human->getType() << " " << std::endl;
	std::cout << miaou->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << "test makeSound" << std::endl;
	human->makeSound();
	miaou->makeSound();
	cat->makeSound();
	
	delete(cat);
	delete(miaou);
	delete(human);

}
