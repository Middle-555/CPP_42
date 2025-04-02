/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:30 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/02 13:57:05 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main()
{
	try 
	{
		Bureaucrat b("Alice", 42);
		Form f("Formulaire A-42", 50, 10);

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
		Form f2("Formulaire UltraSecret", 50, 10);

		b2.signForm(f2);
	}
	catch (std::exception const &e) 
	{
		std::cerr << "Erreur générale : " << e.what() << std::endl;
	}
	return 0;
}
