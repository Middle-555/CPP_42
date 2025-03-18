/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:36 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/25 14:54:12 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Brain;
class Dog : public AAnimal
{
private:
	Brain*	brain;
protected :

public:
	virtual ~Dog();
	Dog();
	Dog(Dog const &other);
	Dog & operator=(Dog const &other);
	void	makeSound() const;
};

#endif