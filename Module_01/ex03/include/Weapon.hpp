/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:53:01 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/21 15:06:02 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	 WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
class Weapon
{
private:
	std::string	type();
public:
	Weapon();
	~Weapon();
	std::string	getType(std::string const type);
	void		setType(std::string const newType);
};

#endif