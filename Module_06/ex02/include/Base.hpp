/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:53:51 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/04 15:55:37 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BASE_HPP
# define	BASE_HPP

#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>

#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"
#define RED     "\033[31m"

class Base
{
private:
	
public:
	virtual ~Base();
};
	Base* generate(void);
	void	identify(Base* p);
	void	identify(Base& p);

#endif