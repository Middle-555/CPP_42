/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:15:52 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/31 17:24:21 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string _name;
	bool _signed;
	const int	_gradeToSign;
	const int	_gradeToExec;
public:
	Form();
	Form(const std::string &name, int gradeToSign, int gradeToExec);
	Form(Form const &other);
	Form& operator=(Form const &other);
	~Form();

	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
	void beSigned(Bureaucrat const &bureaucrat);
	bool isSigned() const;
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

std::ostream& operator<<(std::ostream& os, const Form& rhs);

#endif