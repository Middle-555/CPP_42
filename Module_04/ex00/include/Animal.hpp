/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:13 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/05 15:18:46 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
private:

protected :
	std::string _type;
public:
//forme cano
	Animal();
	virtual ~Animal();
	Animal(Animal const &other);
	Animal & operator=(Animal const &other);

// Getters
std::string  const &getType() const;
// Fonction membre standard 
virtual void 	makeSound() const;
};

std::ostream &operator<<(std::ostream &os, Animal const &rhs);
#endif
