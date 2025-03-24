/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:30 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/24 17:12:41 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() 
{
    try 
    {
        Bureaucrat b1("Jean", 151);
        std::cout << b1 << std::endl;
    }
    catch (std::exception const &e) 
    {
        std::cerr << "Erreur à la création de b1 : " << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat b2("Lucie", 1);
        std::cout << b2 << std::endl;

        std::cout << "On essaie d'incrémenter (passer au-dessus du grade max)..." << std::endl;
        b2.incrementGrade();
        std::cout << b2 << std::endl;
    }
    catch (std::exception const &e) 
    {
        std::cerr << "Erreur pendant l'incrémentation : " << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat b3("Paul", 150);
        std::cout << b3 << std::endl;

        std::cout << "On essaie de décrémenter (passer en-dessous du grade min)..." << std::endl;
        b3.decrementGrade();
        std::cout << b3 << std::endl;
    }
    catch (std::exception const &e) 
    {
        std::cerr << "Erreur pendant la décrémentation : " << e.what() << std::endl;
    }
    return 0;
}
