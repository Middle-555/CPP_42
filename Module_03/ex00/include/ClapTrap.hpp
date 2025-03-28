/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:09:14 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/28 10:59:42 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>
#include <string>
class ClapTrap
{
private:
	std::string _name;
	int	_hitPoint;
	int	_energyPoint;
	int	_attackDamage;
public:
// Forme canonique 
	ClapTrap();
	~ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(ClapTrap const &other);
	ClapTrap & operator=(ClapTrap const &other);
	
// Fonction membre du projet
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
// Getters
	std::string  const &getName() const;
	int	getHitPoint() const;
	int	getEnergyPoint() const;
	int	getAttackDamage() const;

// Setters
	void	setHitPoint (const int hp);
	void	setEnergyPoint (const int ep);
	void	setAttackDamage (const int ad);
	void	setName(const std::string name);
};
std::ostream &operator<<(std::ostream &os, ClapTrap const &rhs);

#endif