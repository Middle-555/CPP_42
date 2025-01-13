/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:30:06 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/13 18:09:34 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout<< "Repertory Closed" << std::endl;
}


void	PhoneBook::add()
{
	std::string	firstName, lastName, nickName,
		phoneNumber, darkestSecret;
	int			isValid;
	int			i;

	while (firstName.empty())
	{
		std::cout << "Enter First Name:" << std::endl;
		std::getline(std::cin, firstName);
		if (firstName.empty())
			std::cout << "Error: This field cannot be empty." << std::endl;
	}
	while (lastName.empty())
	{
		std::cout << "Enter Last Name:" << std::endl;
		std::getline(std::cin, lastName);
		if (lastName.empty())
			std::cout << "Error: This field cannot be empty." << std::endl;
	}
	while (nickName.empty())
	{
		std::cout << "Enter Nickname:" << std::endl;
		std::getline(std::cin, nickName);
		if (nickName.empty())
			std::cout << "Error: This field cannot be empty." << std::endl;
	}
	while (true)
	{
		std::cout << "Enter Phone Number:" << std::endl;
		std::getline(std::cin, phoneNumber);
		if (phoneNumber.empty())
		{
			std::cout << "Error: This field cannot be empty." << std::endl;
			continue;
		}
		isValid = 1;
		i = 0;
		while (i < phoneNumber.length())
		{
			if (!isdigit(phoneNumber[i]))
			{
				isValid = 0;
				break;
			}
			i++;
		}
		if (!isValid)
		{
			std::cout << "Error: The phone number must contain only digits." << std::endl;
			continue;
		}
		break;
	}
	while (darkestSecret.empty())
	{
		std::cout << "Enter Darkest Secret:" << std::endl;
		std::getline(std::cin, darkestSecret);
		if (darkestSecret.empty())
			std::cout << "Error: This field cannot be empty." << std::endl;
	}

	this->repertory[this->index % 8].setFirstName(firstName);
	this->repertory[this->index % 8].setLastName(lastName);
	this->repertory[this->index % 8].setNickName(nickName);
	this->repertory[this->index % 8].setPhoneNumber(phoneNumber);
	this->repertory[this->index % 8].setDarkestSecret(darkestSecret);
	this->index++;
	std::cout << "All information has been successfully registered!" << std::endl;
}


void	PhoneBook::search()
{
	if (!this->repertory[0].getContact().empty())
}