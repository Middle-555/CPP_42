/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:11:39 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 17:00:21 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	//std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materiaStock[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	//std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materiaStock[i])
		{
			delete _materiaStock[i];
			_materiaStock[i] = NULL;
		}
	}
}

MateriaSource::MateriaSource(MateriaSource const & other)
{
	//std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (other._materiaStock[i])
			_materiaStock[i] = other._materiaStock[i]->clone();
		else
			_materiaStock[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const & other)
{
	//std::cout << "MateriaSource copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materiaStock[i])
			{
				delete _materiaStock[i];
				_materiaStock[i] = NULL;
			}
			if (other._materiaStock[i])
				_materiaStock[i] = other._materiaStock[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
	{
		std::cout << "Cannot learn a NULL materia" << std::endl;
		return;
	}
	
	for (int i = 0; i < 4; i++)
	{
		if (_materiaStock[i] == NULL)
		{
			_materiaStock[i] = m;
			std::cout << "Learned a new materia of type: " << m->getType() << std::endl;
			return;
		}
	}
	std::cout << "Cannot learn more than 4 materias" << std::endl;
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materiaStock[i] && _materiaStock[i]->getType() == type)
		{
			std::cout << "Creating new materia of type: " << type << std::endl;
			return _materiaStock[i]->clone();
		}
	}
	std::cout << "No materiaStock materia of type: " << type << std::endl;
	return NULL;
}
