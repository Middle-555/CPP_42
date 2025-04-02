/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:23:46 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/31 18:09:37 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	PRESIDENTIALPARDONFORM_HPP
# define	PRESIDENTIALPARDONFORM_HPP

#include "../include/AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string _target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(PresidentialPardonForm const &other);
	PresidentialPardonForm& operator=(PresidentialPardonForm const &other);
	virtual ~PresidentialPardonForm();
	virtual void execute(Bureaucrat const & executor) const;
};

#endif