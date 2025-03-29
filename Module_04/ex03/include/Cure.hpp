/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:14:37 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 12:15:32 by kpourcel         ###   ########.fr       */
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
	/* data */
public:
	Cure(/* args */);
	~Cure();
};

Cure::Cure(/* args */)
{
}

Cure::~Cure()
{
}

#endif