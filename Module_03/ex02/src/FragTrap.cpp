/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 00:15:24 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/04 16:49:47 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

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

FragTrap::  FragTrap( ClapTrap const &other)
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
