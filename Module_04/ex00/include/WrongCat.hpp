/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:49:47 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/06 18:53:35 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONG_CAT_HPP
# define  WRONG_CAT_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class wrongCat : public wrongAnimal
{
protected:

public:
	wrongCat();
	~wrongCat();
	wrongCat(wrongCat const &other);
	wrongCat & operator=(wrongCat const &other);

	void 	makeSound() const;

};

#endif