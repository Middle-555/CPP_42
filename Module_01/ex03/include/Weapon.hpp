/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:53:01 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/21 15:39:59 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	 WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string type);
	~Weapon();
	std::string	&getType(std::string  type) const;
	void		setType(std::string  newType);
};

#endif