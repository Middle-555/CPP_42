/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:30:26 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/07 18:44:40 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phoneBook;
	int choice;

	phoneBook.add();
	phoneBook.search();
	//phoneBook.Exit();
	return (0);
}