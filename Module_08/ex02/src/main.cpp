/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:11:39 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/15 11:00:57 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

int	main()
{
	printTitle("🔁 Test de MutantStack");

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << GREEN << "Top: " << RESET << mstack.top() << std::endl;

	mstack.pop();

	std::cout << GREEN << "Size after pop: " << RESET << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << YELLOW << "Contenu de MutantStack (itérable):" << RESET << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

	// ───────────────────────────────

	printTitle("🔁 Test équivalent avec std::list");

	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);

	std::cout << GREEN << "Back: " << RESET << mlist.back() << std::endl;

	mlist.pop_back();

	std::cout << GREEN << "Size after pop_back: " << RESET << mlist.size() << std::endl;

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	std::cout << YELLOW << "Contenu de std::list (itérable):" << RESET << std::endl;

	std::list<int>::iterator lit = mlist.begin();
	std::list<int>::iterator lite = mlist.end();

	++lit;
	--lit;

	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}

	std::stack<int, std::list<int> > s2(mlist);

	return 0;
}
