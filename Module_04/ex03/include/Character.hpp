/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 13:53:02 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 15:03:36 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CHARACTER_HPP
# define	CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	AMateria*	_inventory[4];
	int		_idx;
public:
	Character();
	~Character();
	Character(Character const &other);
	Character& operator=(Character const &other);
};

#endif