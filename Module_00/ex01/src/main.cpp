/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:30:26 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/21 17:25:24 by kpourcel         ###   ########.fr       */
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
		if (command == "ADD" || command == "add")
			phoneBook.add();
		else if (command == "SEARCH" ||command == "search")
			phoneBook.search();
		else if (command == "EXIT" || command == "exit")
		{
			std::cout << "Exiting PhoneBook. " << std::endl;
			break ;
		}
		else
			std::cout << "Unknown command. Try again. " << std::endl;
	}
	return (0);
}
