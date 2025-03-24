/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:16:35 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/24 18:31:39 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	std::cout << "Default Constructor Called" << std::endl;
	_signed = false;
}

Form::~Form()
{
	std::cout << "Default Constructor Called" << std::endl;
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

