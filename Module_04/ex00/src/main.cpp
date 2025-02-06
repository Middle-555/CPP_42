/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:03:22 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/06 19:24:06 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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
