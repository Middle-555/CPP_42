/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:00:59 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/03 15:03:40 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <iostream>
#include <string>
class ScavTrap
{
private:
	std::string _name;
	int	_hitPoint;
	int	_energyPoint;
	int	_attackDamage;
public:
	void guardGate();
};

#endif