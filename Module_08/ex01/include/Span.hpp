/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:47:47 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/14 14:56:15 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TestUtils.hpp"

class Span
{
private:
	unsigned int _size;
	
public:
	Span();
	Span(unsigned int n);
	Span(Span const &other);
	Span& operator=(Span const &other);
	~Span();

	int	addNumber();

	int	shortestSpan();
	int	longestSpan();
	
};

