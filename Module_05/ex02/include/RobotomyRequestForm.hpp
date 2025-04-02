/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:21:59 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/31 18:10:13 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	ROBOTOMYREQUESTFORM_HPP
# define	ROBOTOMYREQUESTFORM_HPP

#include "../include/AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string _target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &other);
	RobotomyRequestForm& operator=(RobotomyRequestForm const &other);
	virtual ~RobotomyRequestForm();
	virtual void execute(Bureaucrat const & executor) const;
};


#endif