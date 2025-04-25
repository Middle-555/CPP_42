/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WhatEver.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:20:49 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/25 12:00:17 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WHATEVER_HPP
# define	WHATEVER_HPP

#include "TestUtils.hpp"

template<typename T>
void	swap(T &a, T &b)
{
	T temp = a;

	a = b;

	b = temp;
}

template<typename T>
T	min(T const &a, T  const &b)
{
	if ( a < b)
		return (a);
	else 
		return (b);
}

template<typename T>
T	max(T const &a, T const &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif