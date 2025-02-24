/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:00:23 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/07 15:03:28 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::	Brain()
{
	std::cout << "Default Brain Constructor Called" << std::endl;
	return ;
}

Brain::	~Brain()
{
	std::cout << "Default Brain Destructor Called" << std::endl;
	return ;
}

Brain::	Brain(const Brain& others)
{
	std::cout << "Default Brain Copy Called" << std::endl;
	for (int i = 0; i <100; i++)
		this->ideas[i] = others.ideas[i];
}
Brain  &Brain :: operator=(const Brain& others)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &others)
	{
		for (int i = 0; i <100; i++)
			this->ideas[i] = others.ideas[i];
	}
	return (*this);
}

std::string	Brain :: getIdea(int index) const
{
	if (index >= 0 && index < 100 )
		return (ideas[index]);
	else
		return ("Invalid Index");
}

void	Brain:: setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}
