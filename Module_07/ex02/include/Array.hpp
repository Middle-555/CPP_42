/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:13:43 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/13 16:48:44 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "TestUtils.hpp"

template <typename T>
class Array
{
private:
	T	*_elements;
	unsigned int	_size;
public:
	unsigned int	size() const;
	Array();
	Array(unsigned int n);
	~Array();
	Array(Array const &other);
	Array& operator=(Array const &other);

	T const &operator[](unsigned int index) const;
	T &operator[](unsigned int index); 
	
};

#include "Array.tpp"