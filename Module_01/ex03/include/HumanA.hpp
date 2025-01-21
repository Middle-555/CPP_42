/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:53:39 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/21 16:53:34 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HumanA_HPP
# define	HumanA_HPP

#include <iostream>
#include "Weapon.hpp"
class HumanA
{
private:
	std::string	_name;
	Weapon &_weapon; // référence a l'arme. 
public:
	HumanA(std:: string name, Weapon &_weapon);
	~HumanA();
	void	attack();
};


#endif