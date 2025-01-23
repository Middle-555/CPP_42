/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 22:04:55 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/23 17:40:08 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	Sed_HPP
# define Sed_HPP

#include <iostream>
#include <fstream>
#include <string>

class Sed
{
private:

public:
	Sed();
	~Sed();
	size_t		findFirstToReplace(const std::string& fileContent, const std::string& s1);
	size_t		findLastToReplace(const std::string& fileContent, const std::string& s1);
	std::string	findAndReplace(std::string& fileContent, const std::string s1, const std::string s2);
	void		createAndCopy(const std::string& filename, const std::string& fileContent);
};

#endif