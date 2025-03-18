/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:38 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/18 14:24:58 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std:: string name, int grade) : _name(name)
{
	if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->_grade = grade;
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

Bureaucrat	Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
	{
		std::cout << "GradeTooLowException" << std::endl;
		return ;
	}
	else if (grade < 1)
	{
		std::cout << "GradeTooHighException" << std::endl;
		return ;
	}
	else
	{
		this->_grade = grade;
		return *this;
	}
}

void	Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (this->_grade < 1)
	{
		throw std::exception();
	}
	else
		return ;
	catch (std::exception GradeTooHighException)
	{
		GradeTooHighException.what("GradeTooHighException");
	}
		
}

void	Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (this->_grade > 150)
	{
		throw std::exception();
	}
	else
		return ;
	catch (std::exception GradeTooLowException)
	{
		GradeTooHighException.what("GradeTooLowException");
	}
}
