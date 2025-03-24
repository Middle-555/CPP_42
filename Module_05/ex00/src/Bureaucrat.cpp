/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:38 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/24 16:58:29 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std:: string name, int grade) : _name(name)
{
		if (grade < 1)
        		throw GradeTooHighException();
		if (grade > 150)
			throw GradeTooLowException();
		_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default Bureaucrat Destructor Called" << std::endl;
	return ;
}

std::string	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	--_grade;
		
}

void	Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	++_grade;
}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Le grade est trop haut ! Il doit être entre 1 et 150.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Le grade est trop bas ! Il doit être entre 1 et 150.";
}

