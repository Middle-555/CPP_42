/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:01:12 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 11:32:55 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"


ScavTrap::	ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->setAttackDamage(20);
	this->setEnergyPoint(50);
	this->setHitPoint(100);
	return ;
}
ScavTrap::	ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap default parameter constructor called" << std::endl;
	this->setAttackDamage(20);
	this->setEnergyPoint(50);
	this->setHitPoint(100);
	return ;
}

ScavTrap::  ScavTrap( ScavTrap const &other) : ClapTrap(other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap &ScavTrap ::operator=(ScavTrap const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoint = other.getHitPoint();
		this->_attackDamage = other.getAttackDamage();
		this->_energyPoint = other.getEnergyPoint();
	}	
	return (*this);
}

ScavTrap::	~ScavTrap()
{
	std::cout << "ScavTrap default destructor called" << std::endl;
	return ;
}

void	ScavTrap:: guardGate()
{
	std ::cout << "ScavTrap "<< this->_name << " is now in Gate Keeper mode" << std::endl;
	return ;
}

void	ScavTrap:: attack(const std::string& target)
{
	if (_hitPoint <= 0)
	{
		std::cout << "❌ You can't attack no hp left ! " << std::endl;
		return ;
	}
	if (_energyPoint <= 0)
	{
		std::cout << "❌ You can't attack no energy point !" << std::endl;
		return ;
	}
	_energyPoint--;
	std::cout << "ScavTrap " << this->_name 
        << " attacks " << target 
        << ", causing " << this->_attackDamage 
        << " points of damage!" << std::endl;
		
}

void	ScavTrap:: takeDamage(unsigned int amount)
{
	if (_hitPoint == 0)
	{
		std::cout << "ScavTrap " << this->_name  << " is already dead" << std::endl;
		return ;
	}
	_hitPoint -= amount;
	if (_hitPoint <= 0)
	{
		_hitPoint = 0;
		std::cout << "ScavTrap " << this->_name << " as now 0 hp left" << std::endl;
	}
		
	else
		std::cout << "ScavTrap " << this->_name << " as now " << _hitPoint << " hp left" << std::endl;
	return ;

}

void	ScavTrap:: beRepaired(unsigned int amount)
{
	if (_hitPoint <= 0)
	{
		std::cout << "❌ You can't repair no hp left ! " << std::endl;
		return ;
	}
	if (_energyPoint <= 0)
	{
		std::cout << "❌ You can't repair no energy point ! " << std::endl;
		return ;
	}
	_energyPoint--;
	_hitPoint += amount;
	std::cout << "ScavTrap " << this->_name << " as now " << _hitPoint << " hp left" << std::endl;
	return ;

}
