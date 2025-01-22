/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 22:01:55 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/22 01:38:55 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	std::string	s1 = argv[2];
	if (argc != 4)
	{
		std::cout << " Use ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}
		
	else if (!s1.empty())
	{
		std::cout << "file empty" << std::endl;
		return (1);
	}
	else
	{
		
	}
	
}