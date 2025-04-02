/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:51 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/02 15:54:32 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
private:
	const std:: string _name;
	int	_grade;
	
public:
	Bureaucrat();
	Bureaucrat(const std::string _name, int _grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &other);
	Bureaucrat& operator=(Bureaucrat const &other);

	std::string	getName() const;
	int	getGrade() const;

	void	incrementGrade();
	void	decrementGrade();
	void	signForm(AForm &form);
	void	execute(AForm const & form);
	void	executeForm(AForm const & form);
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

