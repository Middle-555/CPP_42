/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:51 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/31 16:30:38 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class Form;
class Bureaucrat
{
private:
	const std:: string _name;
	int	_grade;
	
public:
	Bureaucrat(const std::string _name, int _grade);
	~Bureaucrat();

	std::string	getName() const;
	int	getGrade() const;

	void	incrementGrade();
	void	decrementGrade();
	void signForm(AForm &form);
	class GradeTooHighException : public std::exception 
	{
   	public:
        virtual const char* what() const throw();
   	};
    	class GradeTooLowException : public std::exception 
	{
    	public:
        virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif