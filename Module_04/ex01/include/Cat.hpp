/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:29 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/05 15:51:24 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"


class Cat : public Animal 
{
protected:

public:
	virtual ~Cat();
	Cat();
	Cat(Cat const &other);
	Cat & operator=(Cat const &other);
	void	makeSound() const;
};

#endif