/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:21:53 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/02 17:40:18 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), _target("Default"){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request", 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other),  _target(other._target){}

RobotomyRequestForm &RobotomyRequestForm:: operator=(RobotomyRequestForm const &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

/**
 * @brief L'utilisation de rand() sans initialiser std::srand(std::time(0)); dans le main
 * N'est pas un vrai aléatoire il suit une certaine séquence.
 * 
 * @param executor
 */
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
		throw AForm::NotSignedException();

	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	
	std::cout << "* Drilling noises... Vrrrzzzzt... *" << std::endl;

	if (std::rand() % 2 == 0)
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy failed on " << _target << "." << std::endl;
}
