/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:09:31 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/03 18:44:17 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->setAttackDamage(10);
	this->setEnergyPoint(10);
	this->setHitPoint(10);
	return ;
}
ClapTrap::ClapTrap(const std::string &name) : _name(name)
{
	std::cout << "Default parameter constructor called" << std::endl;
	this->setAttackDamage(10);
	this->setEnergyPoint(10);
	this->setHitPoint(10);
	return ;
}


ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;
	return ;
}


ClapTrap::	ClapTrap ( ClapTrap const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}


ClapTrap &ClapTrap ::operator=(ClapTrap const &other)
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

void	ClapTrap:: attack(const std::string& target)
{
	if (_hitPoint == 0)
	{
		std::cout << "You can't repair no hp left ! " << std::endl;
		return ;
	}
	if (_energyPoint == 0)
	{
		std::cout << "You can't attack no energy point !" << std::endl;
		return ;
	}
	else
	{
		_energyPoint -= 1;
		std::cout << "ClapTrap " << this->_name 
        	<< " attacks " << target 
        	<< ", causing " << this->_attackDamage 
              	<< " points of damage!" << std::endl;
	}
		
}
void	ClapTrap:: takeDamage(unsigned int amount)
{
	if (_hitPoint == 0)
	{
		std::cout << "ClapTrap " << this->_name  << " is already dead" << std::endl;
		return ;
	}
	else
	{
		_hitPoint -= amount;
		if (_hitPoint <= 0)
			std::cout << "ClapTrap " << this->_name << " as now 0 hp left" << std::endl;
		else
			std::cout << "ClapTrap " << this->_name << " as now " << _hitPoint << " hp left" << std::endl;
		return ;
	}
}
void	ClapTrap:: beRepaired(unsigned int amount)
{
	if (_hitPoint == 0)
	{
		std::cout << "You can't repair no hp left ! " << std::endl;
		return ;
	}
	if (_energyPoint == 0)
	{
		std::cout << "You can't repair no energy point ! " << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " repair " << _hitPoint << " hp left" << std::endl;
		_energyPoint -= 1;
		_hitPoint += amount;
		std::cout << "ClapTrap " << this->_name << " as now " << _hitPoint << " hp left" << std::endl;
		return ;
	}
}

std::string const &ClapTrap:: getName() const
{
	return (this->_name);
}

 int	ClapTrap:: getHitPoint() const
{
	return (this->_hitPoint);
}

int	ClapTrap:: getEnergyPoint() const
{
	return (this->_energyPoint);
}

int	ClapTrap:: getAttackDamage() const
{
	return (this->_attackDamage);
}

void	ClapTrap:: setHitPoint (const int hp)
{
	this->_hitPoint = hp;
}
void	ClapTrap:: setEnergyPoint (const int ep)
{
	this->_energyPoint = ep;
}

void	ClapTrap:: setAttackDamage (const int ad)
{
	this->_attackDamage = ad;
}

void	ClapTrap:: setName(const std::string name)
{
	this->_name = name;
}

std::ostream &operator<<(std::ostream &os, ClapTrap const &rhs)
{
	os << "ClapTrap(name=" << rhs.getName()
	   << ", HP=" << rhs.getHitPoint()
	   << ", EP=" << rhs.getEnergyPoint()
	   << ", AD=" << rhs.getAttackDamage() << ")";
	return (os);
}
