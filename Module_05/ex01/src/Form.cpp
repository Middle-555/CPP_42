/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:16:35 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/07 14:49:24 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

Form::Form() : _name("DefaultForm"), _signed(false), _gradeToSign(150), _gradeToExec(150) {}


Form::Form(const std::string &name, int gradeToSign, int gradeToExec)
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) 
{
    if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other)
    : _name(other._name), _signed(other._signed),
      _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {}

Form &Form::operator=(const Form &other) 
{
    if (this != &other) 
    {
        this->_signed = other._signed;
    }
    return *this;
}

Form::~Form(){}

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
