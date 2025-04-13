/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 10:59:30 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/13 11:10:06 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "TestUtils.hpp"

template<typename T>
void	iter(T *array, int size, void (*function)(T &))
{
	for (int i = 0; i < size; i++)
		function(array[i]);
}
