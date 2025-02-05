/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:01:12 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/05 16:01:58 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


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
