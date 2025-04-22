/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestUtils.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:43:10 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/22 18:10:18 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTUTILS_HPP
# define TESTUTILS_HPP


# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include <iomanip>
# include <cctype>
# include <stdexcept>
# include <algorithm>
# include <vector>
# include <map>
# include <list>
# include <deque>
# include <sys/time.h>



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
inline void printElem(T  &elem) 
{
	std::cout << elem << " ";
}

template <typename Container>
void printContainer(const std::string& name, const Container& c)
{
	std::cout << name << ": ";
	for (size_t i = 0; i < c.size(); ++i)
		std::cout << c[i] << " ";
	std::cout << std::endl;
}

#endif
