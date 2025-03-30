/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:29 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/30 17:25:46 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Brain;
class Cat : public AAnimal 
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