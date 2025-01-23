/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 22:01:55 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/23 17:40:48 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << " Use ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	Sed		sed;
	std::string	file = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::string	line;
	std::string 	fileContent;

	std::ifstream	inputFile(file);
	if (!inputFile)
	{
		std::cout << "Can't open the file." << std::endl;
		return (1);
	}
	if (s1.empty())
	{
		std::cout << "there is nothing to replace" << std::endl;
		return (1);
	}
	else
	{
		while (std::getline(inputFile, line))
		{
			fileContent += line + "\n";
		}
		inputFile.close();
		std::string changed = sed.findAndReplace(fileContent, s1, s2);
		sed.createAndCopy(file, changed);
	}
}