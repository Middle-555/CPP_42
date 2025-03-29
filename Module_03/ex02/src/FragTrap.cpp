/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 00:15:24 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 11:33:27 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/FragTrap.hpp"

FragTrap:: FragTrap() 
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->setAttackDamage(30);
	this->setEnergyPoint(100);
	this->setHitPoint(100);
	return ;
}

FragTrap:: FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->setAttackDamage(30);
	this->setEnergyPoint(100);
	this->setHitPoint(100);
	return ;
}
FragTrap::	~FragTrap()
{
	std::cout << "FragTrap Default destructor called" << std::endl;
	return ;
}

FragTrap::  FragTrap( FragTrap const &other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = other;
}

FragTrap &FragTrap ::operator=(FragTrap const &other)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoint = other.getHitPoint();
		this->_attackDamage = other.getAttackDamage();
		this->_energyPoint = other.getEnergyPoint();
	}	
	return (*this);
}

void	FragTrap:: highFivesGuys(void)
{
	 std::cout << "FragTrap " << this->getName() << " is asking for a positive high five!" << std::endl;
	 return ;
}

void	FragTrap:: attack(const std::string& target)
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
	std::cout << "FragTrap " << this->_name 
        << " attacks " << target 
        << ", causing " << this->_attackDamage 
        << " points of damage!" << std::endl;
		
} 

void	FragTrap:: takeDamage(unsigned int amount)
{
	if (_hitPoint == 0)
	{
		std::cout << "FragTrap " << this->_name  << " is already dead" << std::endl;
		return ;
	}
	_hitPoint -= amount;
	if (_hitPoint <= 0)
	{
		_hitPoint = 0;
		std::cout << "FragTrap " << this->_name << " as now 0 hp left" << std::endl;
	}
		
	else
		std::cout << "FragTrap " << this->_name << " as now " << _hitPoint << " hp left" << std::endl;
	return ;

}

void	FragTrap:: beRepaired(unsigned int amount)
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
	std::cout << "FragTrap " << this->_name << " as now " << _hitPoint << " hp left" << std::endl;
	return ;

}
