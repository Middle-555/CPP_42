/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:10:44 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/02 18:37:34 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	INTERN_HPP
# define 	INTERN_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


class AForm;

class Intern
{
private:
	
public:
	Intern();
	~Intern();
	Intern(Intern const &other);
	Intern& operator=(Intern const &other);
	AForm*	makeForm(std::string const &formName, std::string const &target);
};

#endif