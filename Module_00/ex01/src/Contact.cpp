/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:30:03 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:38:24 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"
#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::setFirstName(const std::string &value)
{
	this->firstName = value;
}

void	Contact::setLastName(const std::string &value)
{
	this->lastName = value;
}

void	Contact::setNickName(const std::string &value)
{
	this->nickName = value;
}
void	Contact::setPhoneNumber(const std::string &value)
{
	this->phoneNumber = value;
}

void	Contact::setDarkestSecret(const std::string &value)
{
	this->darkestSecret = value;
}

std::string	Contact::getFirstName() const 
{
	return this->firstName;
}

std::string	Contact::getLastName() const 
{
	return this->lastName;
}

std::string	Contact::getNickName() const 
{
	return this->nickName;
}

std::string	Contact::getPhoneNumber() const 
{
	return this->phoneNumber;
}

std::string	Contact::getDarkestSecret() const 
{
	return this->darkestSecret;
}

