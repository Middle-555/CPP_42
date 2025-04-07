/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:35:04 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/07 18:59:37 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	SCALARCONVERTER_HPP
# define	SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <limits>


enum LiteralType 
{
    TYPE_CHAR,
    TYPE_INT,
    TYPE_FLOAT,
    TYPE_DOUBLE,
    TYPE_INVALID
};

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &other);
	ScalarConverter& operator=(ScalarConverter const &other);
	~ScalarConverter();
	static bool checkChar(std::string const &literal);
    	static bool checkInt(std::string const &literal);
    	static bool checkFloat(std::string const &literal);
    	static bool checkDouble(std::string const &literal);
    	static LiteralType detectType(std::string const &literal);
public:
	static void convert(std::string const &);
};


#endif
