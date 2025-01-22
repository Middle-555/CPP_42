/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 22:04:55 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/22 01:45:58 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SED_HPP
# define	SED_HPP

#include <iostream>
#include <fstream>
#include <string>

class Sed
{
private:

public:
	Sed();
	~Sed();
	std::string	Sed::findString(std:: string find) const;
	std::string	Sed:: findAndCopy(std::ifstream& file, std::string str, std::string dest);
};

#endif