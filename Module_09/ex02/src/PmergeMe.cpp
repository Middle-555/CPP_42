/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:00:01 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/22 14:33:10 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"


PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

std::vector<int> PmergeMe::isValidInput(int argc, char **argv)
{
	std::vector<int> numbers;

	for (int i = 1; i < argc; ++i)
	{
		std::string arg = argv[i];
		for(size_t j = 0 ; j <arg.size(); ++j)
		{
			if (!isdigit(arg[j]))
				throw std::runtime_error("Invalid character in input: " + arg);
		}
		int value = std::atoi(arg.c_str());
		if (value < 0)
			throw std::runtime_error("Negative number not allowed.");
		numbers.push_back(value);
	}
	return numbers;
}

