/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:46:25 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/04 15:56:19 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

int	main()
{
	std::cout << CYAN << BOLD << "=== [ Polymorphic Type Identification Test ] ===" << RESET << std::endl;
	std::cout << std::endl;

	std::srand(std::time(NULL));

	Base* obj = generate();

	std::cout << std::endl << YELLOW << "[🔍 Identification via pointeur]" << RESET << std::endl;
	identify(obj);

	std::cout << std::endl << YELLOW << "[🔍 Identification via référence]" << RESET << std::endl;
	identify(*obj);

	delete obj;

	std::cout << std::endl << GREEN << "✅ Test terminé sans fuite mémoire." << RESET << std::endl;
	return 0;
}
