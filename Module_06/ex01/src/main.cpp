/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:54:22 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/04 14:36:41 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

void	printData(const std::string& title, Data* data)
{
	std::cout << COLOR_CYAN << COLOR_BOLD << title << COLOR_RESET << std::endl;
	std::cout << "  Adresse : " << data << std::endl;
	std::cout << "  i       : " << data->i << std::endl;
	std::cout << "  c       : " << data->c << std::endl;
	std::cout << "  s       : " << data->s << std::endl;
	std::cout << "  f       : " << data->f << std::endl << std::endl;
}

int	main()
{
	std::cout << COLOR_YELLOW << "=== Création de l'objet original ===" << COLOR_RESET << std::endl;

	Data original;
	original.i = 42;
	original.c = 'Z';
	original.s = "Hello serialization!";
	original.f = 3.14f;

	printData("Objet original", &original);

	std::cout << COLOR_YELLOW << "=== Sérialisation ===" << COLOR_RESET << std::endl;
	uintptr_t raw = Serializer::serialize(&original);
	std::cout << "Adresse (uintptr_t) : " << raw << std::endl << std::endl;

	std::cout << COLOR_YELLOW << "=== Désérialisation ===" << COLOR_RESET << std::endl;
	Data* deserialized = Serializer::deserialize(raw);

	printData("Objet reconstruit", deserialized);

	std::cout << COLOR_GREEN;
	if (deserialized == &original)
		std::cout << "✅ Les pointeurs correspondent : la sérialisation est correcte." << std::endl;
	else
		std::cout << "❌ Erreur : les pointeurs ne correspondent pas !" << std::endl;
	std::cout << COLOR_RESET;

	return 0;
}
