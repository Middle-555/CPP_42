/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:55:36 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/27 19:11:29 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "Test avec DEBUG:\n";
    harl.complain("DEBUG");

    std::cout << "Test avec INFO:\n";
    harl.complain("INFO");

    std::cout << "Test avec WARNING:\n";
    harl.complain("WARNING");

    std::cout << "Test avec ERROR:\n";
    harl.complain("ERROR");

    std::cout << "Test avec un niveau inconnu:\n";
    harl.complain("UNKNOWN");

    return 0;
}

