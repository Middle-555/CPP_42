/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:29:30 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/24 16:01:00 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() 
{
    try 
    {
        Bureaucrat b1("Jean", 151); // Trop bas => exception
        std::cout << b1.getName() << " a le grade " << b1.getGrade() << std::endl;
    }
    catch (std::exception const &e) 
    {
        std::cerr << "Erreur à la création de b1 : " << e.what() << std::endl;
    }

    try 
    {
        Bureaucrat b2("Lucie", 1);
        std::cout << b2.getName() << " a le grade " << b2.getGrade() << std::endl;

        std::cout << "On essaie d'incrémenter (passer au-dessus du grade max)..." << std::endl;
        b2.incrementGrade(); // Trop haut => exception
    }
    catch (std::exception const &e) 
    {
        std::cerr << "Erreur pendant l'incrémentation : " << e.what() << std::endl;
    }

    try 
    {
        Bureaucrat b3("Paul", 150);
        std::cout << b3.getName() << " a le grade " << b3.getGrade() << std::endl;

        std::cout << "On essaie de décrémenter (passer en-dessous du grade min)..." << std::endl;
        b3.decrementGrade(); // Trop bas => exception
    }
    catch (std::exception const &e) 
    {
        std::cerr << "Erreur pendant la décrémentation : " << e.what() << std::endl;
    }

    return 0;
}
