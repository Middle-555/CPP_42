/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:39:10 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/22 18:36:14 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int	main(int argc, char **argv)
{
	try
	{
		std::vector<int> parsedInput = PmergeMe::isValidInput(argc, argv);

		std::cout << "Before: ";
		for (size_t i = 0; i < parsedInput.size(); ++i)
			std::cout << parsedInput[i] << " ";
		std::cout << std::endl;
		PmergeMe sorter;
		std::vector<int> sortedVector = sorter.sortWithVector(parsedInput);
		std::cout << "After:  ";
		for (size_t i = 0; i < sortedVector.size(); ++i)
			std::cout << sortedVector[i] << " ";
		std::cout << std::endl;
		std::deque<int> dequeInput(parsedInput.begin(), parsedInput.end());
		sorter.sortWithDeque(dequeInput);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}
