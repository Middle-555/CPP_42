/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:26:58 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/22 14:27:33 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/**
 * @brief 
 * @tparam Container utilisable pour vector et deque 
 * @param input chaine apres parsing
 * @param main_chain stock la valeure la plus haute dans la paire 
 * @param pending_chain stock la valeure la plus basse dans la paire
 * @param last en cas de nombre de valeur impair dans l'input on serait obligé 
 * 	de laisser un nombre seul.
 */

template <typename Container>
void PmergeMe::createPairs(const Container& input, Container& main_chain, Container& pending_chain, int& last)
{
	size_t i = 0;
	for (; i + 1 < input.size(); i += 2)
	{
		if (input[i] > input[i + 1])
		{
			main_chain.push_back(input[i]);
			pending_chain.push_back(input[i + 1]);
		}
		else
		{
			main_chain.push_back(input[i + 1]);
			pending_chain.push_back(input[i]);
		}
	}
	if (i < input.size())
		last = input[i];
	else
		last = -1;
}
