/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 13:58:19 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 16:30:47 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	std::cout << "Character Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	return ;
}

Character::~Character()
{
	std::cout << "Character Destructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	std::cout << "Character " << _name << " destroyed" << std::endl;
	return ;
}

Character::Character(Character const &other)
{
	std::cout << "Character Copy Constructor Called" << std::endl;

	this->_name = other._name;

	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character& Character::operator=(Character const & other)
{
	if (this != &other)
	{
		this->_name = other._name;

		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];

			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string  const &Character:: getName() const
{
	return this->_name; 
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "⚠️  Can't equip a null materia." << std::endl;
		return;
	}
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << "✅ " << _name << " equipped a materia in slot " << i << "." << std::endl;
			return;
		}
	}
	std::cout << "❌ " << _name << "'s inventory is full. Couldn't equip materia." << std::endl;
}
	
void Character::unequip(int idx) 
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "❌ Invalid index: " << idx << ". Must be between 0 and 3." << std::endl;
		return;
	}
	if (_inventory[idx] == NULL)
	{
		std::cout << "⚠️  No materia to unequip in slot " << idx << "." << std::endl;
		return;
	}
	std::cout << "✅ " << _name << " unequipped materia from slot " << idx << "." << std::endl;
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "❌ Invalid index: " << idx << ". Must be between 0 and 3." << std::endl;
		return;
	}
	if (_inventory[idx] == NULL)
	{
		std::cout << "⚠️  No materia equipped in slot " << idx << " to use." << std::endl;
		return;
	}
	std::cout << "🎯 " << _name << " uses materia from slot " << idx << " on " << target.getName() << std::endl;
	_inventory[idx]->use(target);
}
