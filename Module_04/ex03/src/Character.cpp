/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 13:58:19 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 15:08:01 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character()
{
	std::cout << "Character Constructor Called" << std::endl;
	return ;
}

Character::~Character()
{
	std::cout << "Character Destructor Called" << std::endl;
	return ;
}

Character:: Character(Character const &other)
{
	std::cout << "Character Copy Called" << std::endl;
	*this = other;
}

Character &Character:: operator=(Character const &other)
{
	std::cout << "Character copy assignement called" << std::endl;
	if (this != &other)
		// 
	return (*this);
}