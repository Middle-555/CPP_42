/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:13 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/25 14:53:47 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
private:

protected :
	std::string _type;
public:
//forme cano
	AAnimal();
	virtual ~AAnimal();
	AAnimal(AAnimal const &other);
	AAnimal & operator=(AAnimal const &other);

// Getters
std::string  const &getType() const;
// Fonction membre standard 
virtual void 	makeSound() const = 0;
};
std::ostream &operator<<(std::ostream &os, AAnimal const &rhs);

#endif

