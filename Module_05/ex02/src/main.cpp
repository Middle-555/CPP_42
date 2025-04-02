/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:30 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/02 11:31:49 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

int main() {
	std::cout << "\033[1;34m=== TEST SHRUBBERY CREATION FORM ===\033[0m" << std::endl;
	try {
		Bureaucrat boss("Bob", 1);
		ShrubberyCreationForm treeForm("garden");

		std::cout << "\033[1;33m[INFO] Tentative d'exécution sans signature...\033[0m" << std::endl;
		treeForm.execute(boss); // doit lancer NotSignedException

	} catch (std::exception &e) {
		std::cerr << "\033[1;31m[EXCEPTION] " << e.what() << "\033[0m" << std::endl;
	}

	std::cout << "\n\033[1;32m[INFO] Création d'un bureaucrate et signature du formulaire...\033[0m" << std::endl;

	try {
		Bureaucrat boss("Bob", 1);
		ShrubberyCreationForm treeForm("garden");

		boss.signForm(treeForm); // boss signe le formulaire

		std::cout << "\033[1;33m[INFO] Exécution du formulaire signé...\033[0m" << std::endl;
		boss.execute(treeForm); // exécution correcte → fichier garden_shrubbery

		std::cout << "\033[1;32m[SUCCESS] Formulaire exécuté et fichier généré.\033[0m" << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "\033[1;31m[EXCEPTION] " << e.what() << "\033[0m" << std::endl;
	}

	std::cout << "\n\033[1;34m=== FIN DU TEST ===\033[0m" << std::endl;
	return 0;
}
 