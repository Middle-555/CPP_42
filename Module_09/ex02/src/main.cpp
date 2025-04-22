/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:39:10 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/22 14:32:30 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int	main(int argc, char **argv)
{
	try
	{
		std::vector<int> parsedInput = PmergeMe::isValidInput(argc, argv);
		std::vector<int> main_chain_vec;
		std::vector<int> pending_chain_vec;
		int last_vec;

		PmergeMe sorter;
		sorter.createPairs(parsedInput, main_chain_vec, pending_chain_vec, last_vec);

		printContainer("Main chain (vector)", main_chain_vec);
		printContainer("Pending chain (vector)", pending_chain_vec);
		if (last_vec != -1)
			std::cout << "Last element: " << last_vec << std::endl;

		std::deque<int> dequeInput(parsedInput.begin(), parsedInput.end());
		std::deque<int> main_chain_deque;
		std::deque<int> pending_chain_deque;
		int last_deque;

		sorter.createPairs(dequeInput, main_chain_deque, pending_chain_deque, last_deque);

		printContainer("Main chain (deque)", main_chain_deque);
		printContainer("Pending chain (deque)", pending_chain_deque);
		if (last_deque != -1)
			std::cout << "Last element: " << last_deque << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}