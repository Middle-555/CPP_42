/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:30 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/31 16:30:14 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

int main()
{
	try 
	{
		Bureaucrat b("Alice", 42);
		AForm f("Formulaire A-42", 50, 10);

		std::cout << b << std::endl;
		std::cout << f << std::endl;

		b.signForm(f);

		std::cout << f << std::endl;
	}
	catch (std::exception const &e) 
	{
		std::cerr << "Erreur générale : " << e.what() << std::endl;
	}
	std::cout << "\n======================\n\n";
	try 
	{
		Bureaucrat b2("Bob", 100);
		AForm f2("Formulaire UltraSecret", 50, 10);

		b2.signForm(f2);
	}
	catch (std::exception const &e) 
	{
		std::cerr << "Erreur générale : " << e.what() << std::endl;
	}
	return 0;
}
