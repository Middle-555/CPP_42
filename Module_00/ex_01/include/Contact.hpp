/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:30:36 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/13 21:26:38 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "main.hpp"
class Contact
{
// On definit en private les donnees que l'on souhaite protéger contre les accès non autorisés.
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;	
	std::string phoneNumber;
	std::string darkestSecret;

// Tout ce qui est modifiable par le programme est public.
public:
	Contact();
	~Contact();

	// Ensemble des setters 

	void	setFirstName(const std::string &value);
	void	setLastName(const std::string &value);
	void	setNickName(const std::string &value);
	void	setPhoneNumber(const std::string &value);
	void	setDarkestSecret(const std::string &value);

	// Ensemble des getters

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
	
};

#endif