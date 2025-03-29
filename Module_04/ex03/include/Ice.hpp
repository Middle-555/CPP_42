/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:12:41 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 15:37:48 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ICE_HPP 
# define	ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;
class Ice : public AMateria
{
private:

public:
	Ice();
	~Ice();
	Ice(Ice const &other);
	Ice& operator=(Ice const &other);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif