/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:47:47 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/14 17:24:24 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TestUtils.hpp"

class Span
{
private:
	unsigned int _size;
	std::vector<int> _data;
	Span();
public:
	Span(unsigned int n);
	Span(Span const &other);
	Span& operator=(Span const &other);
	~Span();

	void	addNumber(int n);

	int	shortestSpan() const;
	int	longestSpan() const;
	template<typename Iterator>
	void	addRange(Iterator begin, Iterator end)
	{
		std::size_t rangeSize = std::distance(begin, end);
		if (_data.size() + rangeSize > _size)
			throw std::length_error("Not enough space to add range");
		for (Iterator it = begin; it != end; ++it)
			_data.push_back(*it);
	}
	
};

