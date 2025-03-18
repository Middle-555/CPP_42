/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:00:10 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/25 14:54:00 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

class Brain
{
private:
	std::string	ideas[100];
protected :
public:
// forme cano
	Brain();
	~Brain();
	Brain(const Brain& others);
	Brain& operator=(const Brain& others);
// Getters et setters :
std::string	getIdea(int index) const;
void		setIdea(int index, const std::string& idea);

};

#endif