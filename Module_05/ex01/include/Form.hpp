/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:15:52 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/24 18:11:00 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <stdexcept>

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int	_gradeToSign;
	const int	_gradeToExec;
public:
	Form(std::string name, int gradeToSign, int gradeToExec);
	~Form();

	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExec() const;
};

std::ostream& operator<<(std::ostream& os, const Form& rhs);
#endif