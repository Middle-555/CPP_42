/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:29 by kpourcel          #+#    #+#             */
/*   Updated: 2025/02/05 14:27:59 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"


class Cat : Animal 
{
protected:

public:
	Cat();
	~Cat();
	Cat(Cat const &other);
	Cat & operator=(Animal const &other);
	
};

#endif