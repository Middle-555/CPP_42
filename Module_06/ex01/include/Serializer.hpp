/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:54:09 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/04 14:36:25 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	SERIALIZER_HPP
# define	SERIALIZER_HPP

#include <iostream>
#include <string>
#include <cstdint>
#include <iomanip> 
#include "Data.hpp"

#define COLOR_RESET    "\033[0m"
#define COLOR_GREEN    "\033[32m"
#define COLOR_YELLOW   "\033[33m"
#define COLOR_CYAN     "\033[36m"
#define COLOR_BOLD     "\033[1m"

class Serializer
{
private:
	Serializer();
	~Serializer();
	Serializer(Serializer const &other);
	Serializer& operator=(Serializer const &other);
public:
	static	uintptr_t serialize(Data* ptr);
	static	Data* deserialize(uintptr_t raw);
};

#endif