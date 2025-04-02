/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:30 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/02 17:42:04 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
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
	std::srand(std::time(0));
	std::cout << YELLOW << "=== TEST 1 : Bureaucrat ===" << RESET << std::endl;
	try
	{
		Bureaucrat bob("Bob", 3);
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		bob.decrementGrade();
		std::cout << bob << std::endl;
	} 
	catch (std::exception &e) 
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << YELLOW << "\n=== TEST 2 : ShrubberyCreationForm ===" << RESET << std::endl;
	try
	{
		Bureaucrat alice("Alice", 130);
		ShrubberyCreationForm shrub("garden");
		alice.signForm(shrub);
		alice.executeForm(shrub);

		Bureaucrat bob("Bob", 1);
		bob.signForm(shrub);
		bob.executeForm(shrub);
	} 
	catch (std::exception &e) 
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << YELLOW << "\n=== TEST 3 : RobotomyRequestForm ===" << RESET << std::endl;
	try {
		Bureaucrat john("John", 40);
		RobotomyRequestForm robot("Bender");

		john.signForm(robot);
		for (int i = 0; i < 4; i++)
		{
			john.executeForm(robot);
		}
	} 
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	std::cout << YELLOW << "\n=== TEST 4 : PresidentialPardonForm ===" << RESET << std::endl;
	try 
	{
		Bureaucrat prez("Zaphod", 1);
		PresidentialPardonForm pardon("Ford Prefect");

		prez.signForm(pardon);
		prez.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return 0;
}
