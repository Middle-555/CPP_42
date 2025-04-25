/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:00:01 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/25 11:48:20 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"


PmergeMe::PmergeMe(){}
PmergeMe::PmergeMe(PmergeMe const &other)
{
	*this = other;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &other)
{
	if (this != &other)
	{
		this->_deq = other._deq;
		this->_vec = other._vec;
	}
	return *this;
}

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
		for (size_t k = 0; k < numbers.size(); ++k)
		{
			if (numbers[k] == value)
				throw std::runtime_error("Duplicate number detected: " + arg);
		}
		numbers.push_back(value);
	}
	return numbers;
}

std::vector<int>	PmergeMe::sortWithVector(const std::vector<int>& input)
{
	struct timeval start, end;
	gettimeofday(&start, NULL);
	std::vector<int>	main_chain;
	std::vector<int>	pending_chain;
	int	last;

	createPairs(input, main_chain, pending_chain, last);
	std::sort(main_chain.begin(), main_chain.end());
	for (size_t i = 0; i < pending_chain.size(); ++i)
	{
		int value = pending_chain[i];
		std::vector<int>::iterator pos = std::lower_bound(main_chain.begin(), main_chain.end(), value);
		main_chain.insert(pos, value);
	}
	if (last != -1)
	{
		std::vector<int>::iterator pos = std::lower_bound(main_chain.begin(), main_chain.end(), last);
		main_chain.insert(pos, last);
	}
	std::cout << "Sorted vector: ";
	for (size_t i = 0; i < main_chain.size(); ++i)
		std::cout << main_chain[i] << " ";
	std::cout << std::endl;
	gettimeofday(&end, NULL);
	printTime(start, end, "Vector", input.size());
	return main_chain;
}

std::deque<int>	PmergeMe::sortWithDeque(const std::deque<int>& input)
{
	struct timeval start, end;
	gettimeofday(&start, NULL);
	std::deque<int>	main_chain;
	std::deque<int>	pending_chain;
	int	last;

	createPairs(input, main_chain, pending_chain, last);
	std::sort(main_chain.begin(), main_chain.end());
	for (size_t i = 0; i < pending_chain.size(); ++i)
	{
		int value = pending_chain[i];
		std::deque<int>::iterator pos = std::lower_bound(main_chain.begin(), main_chain.end(), value);
		main_chain.insert(pos, value);
	}
	if (last != -1)
	{
		std::deque<int>::iterator pos = std::lower_bound(main_chain.begin(), main_chain.end(), last);
		main_chain.insert(pos, last);
	}
	std::cout << "Sorted deque: ";
	for (size_t i = 0; i < main_chain.size(); ++i)
		std::cout << main_chain[i] << " ";
	std::cout << std::endl;

	gettimeofday(&end, NULL);
	printTime(start, end, "Deque", input.size());
	return main_chain;
}

void	PmergeMe::printTime(const struct timeval& start, const struct timeval& end, const std::string& containerType, size_t size)
{
	long seconds  = end.tv_sec  - start.tv_sec;
	long microseconds = end.tv_usec - start.tv_usec;
	double totalMicro = seconds * 1000000.0 + microseconds;

	std::cout << "Time to process a range of " << size
	          << " elements with " << containerType << " : ";

	if (totalMicro < 1000)
	{
		std::cout << totalMicro << " µs";
	}
	else if (totalMicro < 1000000)
	{
		std::cout.precision(3);
		std::cout << std::fixed << totalMicro / 1000.0 << " ms";
	}
	else
	{
		std::cout.precision(6);
		std::cout << std::fixed << totalMicro / 1000000.0 << " s";
	}

	std::cout << std::endl;
}

