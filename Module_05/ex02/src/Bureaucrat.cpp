/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:38 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/02 10:54:19 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"

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
	return "Grade is too high for this form ! Grade must be between 1 and 150";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low for this form ! Grade must be between 1 and 150";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}

void	Bureaucrat::signForm(AForm &form)
{
	try 
	{
		form.beSigned(*this);
		std::cout << *this << " signed " << form << std::endl;
	} 
	catch (std::exception const &e) 
	{
		std::cout << *this << " couldn’t sign " << form << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::execute(AForm const &form)
{
	try
	{
	    form.execute(*this);
	    std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
	    std::cout << this->_name << " couldn't execute " << form.getName()
		      << " because " << e.what() << std::endl;
	}
} 