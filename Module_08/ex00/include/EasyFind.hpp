/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:52:39 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/14 12:27:15 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "TestUtils.hpp"
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <vector>


template <typename T>
typename T::iterator easyfind(T &container, int n);

	
#include "EasyFind.tpp"
