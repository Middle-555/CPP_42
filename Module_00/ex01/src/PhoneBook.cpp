/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:30:06 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/24 16:59:30 by kpourcel         ###   ########.fr       */
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

std::string PhoneBook::validateNotEmpty(const std::string &field_name)
{
    std::string input;

    while (true)
    {
        std::cout << "Enter " << field_name << ": " << std::endl;
        std::getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "Error: This field cannot be empty." << std::endl;
            continue;
        }
        bool onlySpaces = true;
        for (size_t i = 0; i < input.size(); i++)
        {
            if (!std::isspace(static_cast<unsigned char>(input[i])))
            {
                onlySpaces = false;
                break;
            }
        }
        if (onlySpaces)
        {
            std::cout << "Error: This field cannot contain only spaces." << std::endl;
            continue;
        }
        break;
    }
    return input;
}


std::string	PhoneBook::validatePhoneNumber(void)
{
	std::string	phone_number;
	int			is_valid;
	size_t		i;

	while (true)
	{
		std::cout << "Enter Phone Number: "
			<< std::endl;
		std::getline(std::cin, phone_number);
		if (phone_number.empty())
		{
			std::cout << "Error: This field"
				<< " cannot be empty."
				<< std::endl;
			continue ;
		}
		is_valid = 1;
		i = 0;
		while (i < phone_number.length())
		{
			if (!isdigit(phone_number[i]))
			{
				is_valid = 0;
				break ;
			}
			i++;
		}
		if (!is_valid)
		{
			std::cout << "Error: The phone"
				<< " number must contain"
				<< " only digits."
				<< std::endl;
			continue ;
		}
		break ;
	}
	return (phone_number);
}

void	PhoneBook::add(void)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;

	first_name = validateNotEmpty("First Name");
	last_name = validateNotEmpty("Last Name");
	nick_name = validateNotEmpty("Nickname");
	phone_number = validatePhoneNumber();
	darkest_secret = validateNotEmpty("Darkest Secret");
	this->repertory[this->index % 8].setFirstName(first_name);
	this->repertory[this->index % 8].setLastName(last_name);
	this->repertory[this->index % 8].setNickName(nick_name);
	this->repertory[this->index % 8].setPhoneNumber(phone_number);
	this->repertory[this->index % 8].setDarkestSecret(darkest_secret);
	this->index++;
	std::cout << "All information has been successfully registered!"
		<< std::endl;
}

void	PhoneBook::search()
{
	if (!this->repertory[0].getFirstName().size())
	{
		std::cout << "	Contact not found" << std::endl;
		return;
	}
	
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	
	for (int i = 0; i < 8; i++)
	{
		std::cout	<< "|" << std::setw(10) << std::right << i + 1
					<< "|" << std::setw(10) << std::right << truncate(this->repertory[i].getFirstName())
					<< "|" << std::setw(10) << std::right << truncate(this->repertory[i].getLastName())
					<< "|" << std::setw(10) << std::right << truncate(this->repertory[i].getNickName()) 
					<< "|" << std::endl;
	}
	std::cout << " ------------------------------------------- " << std::endl;
	PhoneBook::displayIndex();
}
std::string		PhoneBook::truncate(std::string str) 
{
    if (str.length() > 10) 
    {
        return str.substr(0, 10 - 1) + "."; 
    }
    return str;
}

void	PhoneBook::displayIndex(void) const
{
	std::string	input;
	int			index;

	std::cout << "Enter the index of the contact to display:" << std::endl;
	std::getline(std::cin, input);

	if (input.length() == 1 && isdigit(input[0]))
	{
		index = input[0] - '0' - 1;
		if (index >= 0 && index < 8 && this->repertory[index].getFirstName().size())
		{
			std::cout << "First Name: " << this->repertory[index].getFirstName() << std::endl;
			std::cout << "Last Name: " << this->repertory[index].getLastName() << std::endl;
			std::cout << "Nickname: " << this->repertory[index].getNickName() << std::endl;
			std::cout << "Phone Number: " << this->repertory[index].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << this->repertory[index].getDarkestSecret()
				<< std::endl;
			return ;
		}
	}
	std::cout << "Error: Invalid index." << std::endl;
}

void	PhoneBook::display(Contact contact)
{
	if (!contact.getFirstName().size())
	{
		std::cout << "	Contact not found" << std::endl;
		return;
	}
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
			std::cout << "Last Name: " << contact.getLastName() << std::endl;
			std::cout << "Nickname: " << contact.getNickName() << std::endl;
			std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << contact.getDarkestSecret()
				<< std::endl;
}

void	PhoneBook::displayMenu(void)
{
	std::cout << "Welcome to your PhoneBook!" << std::endl;
	std::cout << "Available commands:" << std::endl;
	std::cout << "  ADD    - Add a new contact" << std::endl;
	std::cout << "  SEARCH - Search for a contact" << std::endl;
	std::cout << "  EXIT   - Exit the program" << std::endl;
}

