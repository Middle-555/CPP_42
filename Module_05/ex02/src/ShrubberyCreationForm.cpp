/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:21:34 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/02 14:48:35 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default"){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other), _target(other._target){}

ShrubberyCreationForm &ShrubberyCreationForm:: operator=(ShrubberyCreationForm const &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
		throw AForm::NotSignedException();

	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	std::ofstream file((_target + "_shrubbery").c_str());
	if (!file)
		throw std::runtime_error("Erreur d'ouverture de fichier.");

	file << "       _-_       \n"
		 << "    /~~   ~~\\   \n"
		 << " /~~         ~~\\ \n"
		 << "{               }\n"
		 << " \\  _-     -_  / \n"
		 << "   ~  \\ //  ~  \n"
		 << "_- -   | | _- _  \n"
		 << "  _ -  | |   -_  \n"
		 << "      // \\      \n";
	file.close();
}

const char* AForm::NotSignedException::what() const throw() 
{
	return "Le formulaire n'est pas signé.";
}
