/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:15:30 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/02 18:39:06 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern &Intern::operator=(Intern const &other)
{
	(void)other;
	return (*this);
}

static AForm* createShrubbery(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

static AForm* createRobotomy(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

static AForm* createPresidential(std::string const &target)
{
	return new PresidentialPardonForm(target);

}

AForm*	Intern::makeForm(std::string const &formName, std::string const &target)
{
	std::string names[3] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm* (*Form[3])(std::string const &) =
	{
		&createShrubbery,
		&createRobotomy,
		&createPresidential
	};
	for (int i = 0; i < 3; ++i)
	{
		if (formName == names[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (Form[i](target));
		}
	}
	std::cout << "Intern: form name \"" << formName << "\" not recognized." << std::endl;
	return NULL;
}
