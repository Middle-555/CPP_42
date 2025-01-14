/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:30:26 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/13 21:22:55 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phoneBook;
	std::string	command;

	phoneBook.displayMenu();
	while (true)
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phoneBook.add();
		else if (command == "SEARCH")
			phoneBook.search();
		else if (command == "EXIT")
		{
			std::cout << "Exiting PhoneBook. " << std::endl;
			break ;
		}
		else
			std::cout << "Unknown command. Try again. " << std::endl;
	}
	return (0);
}
