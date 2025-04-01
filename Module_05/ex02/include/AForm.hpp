/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:15:52 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/01 23:03:34 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
private:
	const std::string _name;
	bool _signed;
	const int	_gradeToSign;
	const int	_gradeToExec;
public:
	AForm();
	AForm(std::string name, int gradeToSign, int gradeToExec);
	AForm(AForm const &other);
	AForm& operator=(AForm const &other);
	virtual ~AForm();

	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
	void beSigned(Bureaucrat const &bureaucrat);
	bool isSigned() const;
	virtual void execute(Bureaucrat const & executor) const = 0;
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
	class NotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const AForm& rhs);

#endif