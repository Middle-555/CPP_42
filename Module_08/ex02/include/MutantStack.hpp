/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:57:53 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/15 10:47:17 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TestUtils.hpp"
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	MutantStack();
	~MutantStack();
	MutantStack(MutantStack const &other);
	MutantStack& operator=(MutantStack const &other);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
        iterator end();
};

#include "MutantStack.tpp"
