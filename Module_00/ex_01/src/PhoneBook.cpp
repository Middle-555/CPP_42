/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:30:06 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/07 18:44:16 by kpourcel         ###   ########.fr       */
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
	std::cout << "Enter First Name : " << std::endl;
	std::getline(std::cin, firstName);
	std::cout << "Enter Last Name : " << std::endl;
	std::getline(std::cin, lastName);	
	std::cout << "Enter Nickname : " << std::endl;
	std::getline(std::cin, nickName);
	std::cout << "Enter Phone number : " << std::endl;
	std::getline(std::cin, phoneNumber);
	std::cout << "Enter Darkest secret : " << std::endl;
	std::getline(std::cin, darkestSecret);
	
	if (firstName != "" && lastName != "" && nickName != "" &&
	phoneNumber != "" && darkestSecret != "")
		this->repertory[this->index % 8].setContact(firstName, lastName, nickName,
			phoneNumber, darkestSecret);
	this->index++;
	std::cout << "All informations are successfuly registered !" 
		<< std::endl;
}

void	PhoneBook::search()
{
	if (!this->repertory[0].getContact().size())
}