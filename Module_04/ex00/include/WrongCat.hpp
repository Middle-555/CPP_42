/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:49:47 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/06 13:54:13 by kpourcel         ###   ########.fr       */
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
	std::string _type;
public:
	wrongCat();
	~wrongCat();
	wrongCat(wrongCat const &other);
	wrongCat & operator=(wrongCat const &other);

	void 	makeSound() const;

};
std::ostream &operator<<(std::ostream &os, wrongCat const &rhs);

#endif