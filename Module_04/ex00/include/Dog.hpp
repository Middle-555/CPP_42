/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:36 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/05 14:28:16 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : Animal
{
private:

protected :

public:
	Dog();
	~Dog();
	Dog(Dog const &other);
	Dog & operator=(Animal const &other);
	
};

#endif