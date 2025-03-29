/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:02:31 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 16:57:21 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	IMATERIASOURCE_HPP
# define	IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
private:
	
public:
	virtual ~IMateriaSource(){};

	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif