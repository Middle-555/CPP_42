/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:36:42 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/13 16:54:39 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _elements(NULL), _size(0){}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]), _size(n){}

template <typename T>
Array<T>::Array(const Array &other) : _elements(NULL), _size(other._size) 
{
	_elements = new T[_size];
	for (unsigned int i = 0; i < _size; ++i)
		_elements[i] = other._elements[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other) 
{
	if (this != &other)
	{
		delete[] _elements;
		_size = other._size;
		_elements = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_elements[i] = other._elements[i];
	}
	return *this;
}


template <typename T>
Array<T>::~Array()
{
	delete[] _elements;
} 

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

template <typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Array: index out of bounds");
	return _elements[index];
}

template <typename T>
T const	&Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Array: index out of bounds");
	return _elements[index];
}
