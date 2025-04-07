/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:30 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/07 14:47:56 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/Intern.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"


#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"

int main()
{
	Intern intern;
	Bureaucrat executor("Jean-Charles", 1);

	AForm* form1 = intern.makeForm("robotomy request", "Bender");
	AForm* form2 = intern.makeForm("shrubbery creation", "Backyard");
	AForm* form3 = intern.makeForm("presidential pardon", "Arthur Dent");
	AForm* form4 = intern.makeForm("wrong form", "Nobody");

	if (form1)
	{
		executor.signForm(*form1);
		executor.executeForm(*form1);
		delete form1;
	}
	if (form2)
	{
		executor.signForm(*form2);
		executor.executeForm(*form2);
		delete form2;
	}
	if (form3)
	{
		executor.signForm(*form3);
		executor.executeForm(*form3);
		delete form3;
	}
	if (form4) 
	{
		delete form4;
	}
	return 0;
}
