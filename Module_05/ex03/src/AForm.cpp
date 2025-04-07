/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:21:42 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/07 15:10:59 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExec(150){}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExecute) 
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm::~AForm(){}

AForm::AForm(const AForm &other)
    : _name(other._name), _signed(other._signed),
      _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec) {}
      
AForm &AForm::operator=(const AForm &other) 
{
    if (this != &other) 
    {
        this->_signed = other._signed;
    }
    return *this;
}

int	AForm::getGradeToExec() const
{
	return _gradeToExec;
}

int	AForm::getGradeToSign() const
{
	return _gradeToSign;
}

std::string	AForm::getName() const
{
	return _name;
}

void 	AForm:: beSigned(Bureaucrat const &bureaucrat)
{
	if (_signed)
		throw std::runtime_error("Form already signed.");
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

bool AForm::isSigned() const {
	return _signed;
}

const char* AForm::GradeTooHighException::what() const throw() 
{
	return "Grade is too high for this AForm !";
}

const char* AForm::GradeTooLowException::what() const throw() 
{
	return "Grade is too low for this AForm !";
}

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
	os << AForm.getName()
	   << " [sign grade: " << AForm.getGradeToSign()
	   << ", exec grade: " << AForm.getGradeToExec()
	   << ", is signed: " << (AForm.isSigned() ? "yes" : "no") << "]";
	return os;
}
