/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:14:37 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 15:38:40 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	CURE_HPP
# define	CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;
class Cure : public AMateria
{
private:

public:
	Cure();
	~Cure();
	Cure(Cure const &other);
	Cure& operator=(Cure const &other);

	AMateria* clone() const;
	void use(ICharacter& target);
	
};

Cure::Cure()
{
}

Cure::~Cure()
{
}

#endif