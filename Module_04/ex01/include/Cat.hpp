/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:29 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/30 16:24:38 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Brain;
class Cat : public Animal 
{
private :
	Brain*	_brain;
protected:

public:
	virtual ~Cat();
	Cat();
	Cat(Cat const &other);
	Cat & operator=(Cat const &other);
	void	makeSound() const;

	void setIdea(int index, const std::string& idea);
	std::string getIdea(int index) const;
};

#endif