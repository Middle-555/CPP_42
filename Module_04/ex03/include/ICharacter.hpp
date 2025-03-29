/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 11:55:15 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 16:13:55 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	ICHARACTER_HPP
# define	ICHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class ICharacter
{
protected:
public:
	ICharacter();
	virtual ~ICharacter();

	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif