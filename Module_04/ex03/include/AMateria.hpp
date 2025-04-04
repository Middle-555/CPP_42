/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 11:50:48 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 16:54:15 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	AMATERIA_HPP
# define 	AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;
class AMateria 
{
protected:
	std::string _type;
public:
	AMateria();
	virtual ~AMateria();
	AMateria(AMateria const &other);
	AMateria& operator=(AMateria const &other);
	
	AMateria(std::string const &type);
	std::string const &getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif