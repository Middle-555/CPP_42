/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:10:45 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 15:12:36 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	MATERIASOURCE_HPP
# define	MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	/* data */
public:
	MateriaSource();
	~MateriaSource();
};

MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
}


#endif