/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:38 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/07 14:49:44 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150){}

Bureaucrat::Bureaucrat(const std:: string name, int grade) : _name(name)
{
		if (grade < 1)
        		throw GradeTooHighException();
		if (grade > 150)
			throw GradeTooLowException();
		_grade = grade;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {}
    
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) 
{
    if (this != &other) {
        this->_grade = other._grade;
    }
    return *this;
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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}
