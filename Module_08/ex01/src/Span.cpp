/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:00:27 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/29 14:39:20 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span() : _size(0), _data(){}
Span::Span(unsigned int n ) : _size(n), _data(){}
Span::~Span(){}
Span::Span(Span const &other)
{
	*this = other;
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
	{
		this->_data = other._data;
		this->_size = other._size;
	}
	return *this;
}

void	Span::addNumber(int n)
{
	if (_data.size() >= _size)
		throw std::length_error("Span is already full !");
	_data.push_back(n);
}

int	Span::shortestSpan() const
{
	if (_data.size() < 2)
		throw std::length_error("Span need more number !");
	std::vector<int> tmp = _data;
	std::sort(tmp.begin(), tmp.end());
	int min = INT_MAX;
	for (size_t i = 1; i < tmp.size(); ++i)
	{
		int diff = tmp[i] - tmp[i - 1];
		if (diff < min)
			min = diff;
	}
	return min;
}

int	Span::longestSpan() const
{
	if (_data.size() < 2)
		throw std::length_error("Span need more number !");
	std::vector<int> tmp = _data;
	std::sort(tmp.begin(), tmp.end());
	return tmp.back() - tmp.front();
}

