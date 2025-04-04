/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:36:42 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/04 14:25:32 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter const &other) {*this = other;}
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &other)
{
	(void)other;
	return *this;
}

bool ScalarConverter::checkChar(std::string const &literal)
{
	if (literal.size() != 1)
		return false;
	char c = literal[0];
	if (!std::isprint(c))
		return false;
	if (std::isdigit(c))
		return false;
	return true;
}

bool  ScalarConverter::checkInt(std::string const &literal)
{
	int	i = 0;
	int	size = literal.size();

	if (literal.empty())
		return false;
	if (literal[i] == '+' || literal[i] == '-')
		i++;
	for (; i < size; ++i)
	{
		if (!std::isdigit(literal[i]))
			return false;
	}
	long val = std::strtol(literal.c_str(), NULL, 10);
    	if (val >= std::numeric_limits<int>::min() && val <= std::numeric_limits<int>::max())
        	return true;
	return false;
}
bool ScalarConverter::checkDouble(std::string const &literal)
{
	int	i = 0;
	int	size = literal.size();
	bool	hasDot;
	
	if (literal == "nan" || literal == "inf" || literal == "+inf" || literal == "-inf")
		return true;
	if (literal.empty())
		return false;
	if (literal[i] == '+' || literal[i] == '-')
		i++;
	for (; i < size ; i++)
	{
		if (literal[i] == '.')
		{
			if (hasDot)
				return false;
			hasDot = true;
		}
		else if (!std::isdigit(literal[i]))
			return false;
	}
	return true;
}

bool	ScalarConverter::checkFloat(std::string const &literal)
{
	if (literal == "nanf" || literal == "inff" || literal == "+inff" || literal == "-inff")
		return true;
	int size = literal.size();
	if (size < 2 || literal[size - 1] != 'f')
		return false;
	std::string numberPart = literal.substr(0, size - 1);
	
	return checkDouble(numberPart);
}


LiteralType ScalarConverter::detectType(std::string const &literal)
{	
	if (checkChar(literal))
    		return TYPE_CHAR;
	if (checkInt(literal))
		return TYPE_INT;
	if (checkFloat(literal))
		return TYPE_FLOAT;
	if (checkDouble(literal))
		return TYPE_DOUBLE;
	return TYPE_INVALID;
}

void 	ScalarConverter::convert(std::string const &literal)
{
	LiteralType type = detectType(literal);

	char	c;
	int	i;
	float 	f;
	double	d;
	switch (type)
    	{
		case TYPE_CHAR:
    			c = literal[0];
    			i = static_cast<int>(c);
    			f = static_cast<float>(c);
    			d = static_cast<double>(c);
   			break;
		case TYPE_INT:
   			i = std::atoi(literal.c_str());
    			c = static_cast<char>(i);
    			f = static_cast<float>(i);
   			d = static_cast<double>(i);
    			break;
		case TYPE_FLOAT:
    			f = std::strtof(literal.c_str(), NULL);
    			c = static_cast<char>(f);
    			i = static_cast<int>(f);
    			d = static_cast<double>(f);
   			break;
		case TYPE_DOUBLE:
   			d = std::strtod(literal.c_str(), NULL);
    			c = static_cast<char>(d);
    			i = static_cast<int>(d);
    			f = static_cast<float>(d);
    			break;
        	default:
            		std::cout << "Impossible à convertir : type invalide" << std::endl;
            		return;
    	}
	if (std::isnan(d) || d < 0 || d > 127)
        	std::cout << "char: impossible" << std::endl;
    	else if (!std::isprint(c))
        	std::cout << "char: Non displayable" << std::endl;
   	 else
        	std::cout << "char: '" << c << "'" << std::endl;
    	if (std::isnan(d) || d < static_cast<double>(std::numeric_limits<int>::min()) || d > static_cast<double>(std::numeric_limits<int>::max()))
        	std::cout << "int: impossible" << std::endl;
    	else
        	std::cout << "int: " << i << std::endl;

   	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}
