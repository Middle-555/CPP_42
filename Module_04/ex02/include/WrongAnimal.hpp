/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:49:38 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/06 13:58:51 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define  WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class wrongAnimal
{
protected:
	std::string _type;
public:
	wrongAnimal();
	~wrongAnimal();
	wrongAnimal(wrongAnimal const &other);
	wrongAnimal & operator=(wrongAnimal const &other);

	std::string  const &getType() const;

	void 	makeSound() const;

};
std::ostream &operator<<(std::ostream &os, wrongAnimal const &rhs);

#endif