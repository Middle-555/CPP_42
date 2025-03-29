/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:02:31 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 12:05:58 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	IMATERIASOURCE_HPP
# define	IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource : public AMateria
{
private:
	
public:
	IMateriaSource();
	virtual ~IMateriaSource();

	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const &type) = 0;
};

IMateriaSource::IMateriaSource()
{
}

IMateriaSource::~IMateriaSource()
{
}

#endif