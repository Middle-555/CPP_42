/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:16:35 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 17:38:54 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	std::cout << "Form Parameter Constructor Called" << std::endl;
	_signed = false;
}

Form::~Form()
{
	std::cout << "Default Form Destructor Called" << std::endl;
}

int	Form::getGradeToExec() const
{
	return _gradeToExec;
}

int	Form::getGradeToSign() const
{
	return _gradeToSign;
}

std::string	Form::getName() const
{
	return _name;
}

void 	Form:: beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

bool Form::isSigned() const {
	return _signed;
}

const char* Form::GradeTooHighException::what() const throw() 
{
	return "Grade is too high for this form !";
}

const char* Form::GradeTooLowException::what() const throw() 
{
	return "Grade is too low for this form !";
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << form.getName()
	   << " [sign grade: " << form.getGradeToSign()
	   << ", exec grade: " << form.getGradeToExec()
	   << ", is signed: " << (form.isSigned() ? "yes" : "no") << "]";
	return os;
}
