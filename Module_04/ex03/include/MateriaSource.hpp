/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:10:45 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/29 16:39:03 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	MATERIASOURCE_HPP
# define	MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _materiaStock[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &other);
	MateriaSource& operator=(MateriaSource const &other);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif