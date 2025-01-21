/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:53:37 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/21 17:20:28 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HumanB_HPP
# define	HumanB_HPP


#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon	*_weapon; // Pointeur sur l'arme init a null avec le constructeur 
public:
	HumanB(std::string name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &weapon);
};

#endif