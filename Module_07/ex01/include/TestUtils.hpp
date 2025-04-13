/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestUtils.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:43:10 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/13 11:35:03 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTUTILS_HPP
# define TESTUTILS_HPP


# include <iostream>
# include <string>
# include <iomanip>
# include <cctype>

// Couleurs terminal ANSI
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define BOLD    "\033[1m"


inline void printTitle(const std::string &title)
{
	std::cout << std::endl
			  << CYAN << BOLD << "=== " << title << " ===" << RESET << std::endl;
}


template<typename T>
inline void printPair(const std::string &label, const T &a, const T &b) 
{
	std::cout << YELLOW << label << RESET << " a = " << a << ", b = " << b << std::endl;
}

template<typename T>
void printElem(T  &elem) 
{
	std::cout << elem << " ";
}

void printInt(int  &n) 
{
	std::cout << n << " ";
}
#endif
