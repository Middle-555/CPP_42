/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:39:24 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/22 18:35:05 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TestUtils.hpp"

class PmergeMe
{
private:
	std::vector<int>	_vec;
	std::deque<int>		_deq;

public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(PmergeMe const &other);
	PmergeMe& operator=(PmergeMe const &other);
	static std::vector<int>	isValidInput(int argc, char **argv);
	
	template <typename Container>
	void	createPairs(const Container& input, Container& main_chain, Container& pending_chain, int& last);
	std::vector<int>	sortWithVector(const std::vector<int>& input);
	std::deque<int>	sortWithDeque(const std::deque<int>& input);
	void	printTime(const struct timeval& start, const struct timeval& end, const std::string& containerType, size_t size);
};

#include "PmergeMe.tpp"