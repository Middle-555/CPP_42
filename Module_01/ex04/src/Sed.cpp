/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 22:06:12 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/23 17:21:10 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::	Sed()
{
	std::cout << "Constructor called " << std::endl;
}

Sed::	~Sed()
{
	std::cout << "Destructor called " << std::endl;
}

/**
 * @brief Cette fonction return la pos size_t du premier caractere de s1 trouvé
 * dans fileContent;
 * 
 * @param str Chaine de caractere dans laquelle on va chercher s1
 * @param s1  caractere que l'on cherche dans fileContent
 * @return size_t 
 */

size_t	Sed::findFirstToReplace(const std::string& fileContent, const std::string& s1) 
{
	std::cout << "Contenu du fichier lu : " << fileContent << std::endl;

	return (fileContent.find(s1));
}

/**
 * @brief Cette fonction return la pos size_t du dernier caractere de s1 trouvé
 * dans fileContent;
 * 
 * @param str Chaine de caractere dans laquelle on va chercher s1
 * @param s1  caractere que l'on cherche dans fileContent.
 * @return size_t 
 */

size_t	Sed::findLastToReplace(const std::string& fileContent, const std::string& s1)
{
	std::cout << "Contenu du fichier lu : " << fileContent << std::endl;
	return (fileContent.rfind(s1));
	
}

/**
 * @brief 
 * 	Determine la position du premier caractere a remplacer puis boucle jusqu'à avoir 
 * 	remplacer la totalité des occurences du fichier.
 * @param fileContent Contient la totalité du Fichier envoyé en Input.
 * @param s1 String a trouvée pour la remplacer.
 * @param s2 String qui modifie s1.
 * @return std::string FileContent pour créer le nouveau Fichier.replace
 */
std::string	Sed::findAndReplace(std::string& fileContent, std::string s1, std::string s2)
{
	size_t	firstReplace = findFirstToReplace(fileContent, s1);
	size_t	lastReplace = findLastToReplace(fileContent, s1);
	size_t	i = 0;

	std::cout << "Premier caractere trouvée : " << firstReplace << std::endl;
	std::cout << "Dernier caractere trouvée : " << lastReplace << std::endl;
	if (firstReplace == std::string::npos || lastReplace  == std::string::npos)
	{
		std::cout << "Aucune occurrence de '" << s1 << "' trouvée dans le texte." << std::endl;
		return (fileContent);
	}
	i = firstReplace;
	while (i <= lastReplace)
	{
		i = fileContent.find(s1, i);
		if (i == std::string::npos || i > lastReplace)
			break ;
		fileContent.erase(i, s1.length());
		fileContent.insert(i, s2);
		i += s2.length();
	}
	std::cout << "Voici la str modifier : " << fileContent << std::endl;
	return (fileContent);
}

/**
 * @brief 
 * 
 * @param filename 
 * @param fileContent 
 */
void	Sed::writeToFile(const std::string& filename, const std::string& fileContent)
{
    std::string newFilename = filename + ".replace";
    std::ofstream outputFile(newFilename);
    if (!outputFile)
    {
        std::cerr << "Erreur : impossible de créer le fichier " << newFilename << std::endl;
        return;
    }
    outputFile << fileContent;
    outputFile.close();
    std::cout << "Fichier '" << newFilename << "' créé" << std::endl;
}