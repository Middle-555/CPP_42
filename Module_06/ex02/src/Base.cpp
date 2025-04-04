/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:20:55 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/04 15:53:39 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/BaseA.hpp"
#include "../include/BaseB.hpp"
#include "../include/BaseC.hpp"

Base::~Base(){}


Base	*generate(void)
{
	int	time = rand() % 3;

	switch (time)
	{
	case 0:
		{
			BaseA *baseA = new BaseA;
			return baseA;
		}
	case 1:
		{
			BaseB *baseB = new BaseB;
			return baseB;
		}
	case 2:
		{
			BaseC *baseC = new BaseC;
			return baseC;
		}
	default:
		return NULL;
	}
}

void	identify(Base* p)
{
	BaseA *baseA = dynamic_cast<BaseA*>(p);
	BaseB *baseB = dynamic_cast<BaseB*>(p);
	BaseC *baseC = dynamic_cast<BaseC*>(p);

	if (baseA != NULL)
		std::cout << "Pointer of type A class" << std::endl;
	else if  (baseB != NULL)
		std::cout << "Pointer of type B class" << std::endl;
	else if (baseC != NULL)
		std::cout << "Pointer of type C class" << std::endl;
	else
		std::cout << "Unknow type of pointer" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		BaseA &baseA = dynamic_cast<BaseA&>(p);
		(void)baseA;
		std::cout << "Reference of type A class" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cout << "Reference is not of type A class" << std::endl;
	}
	try
	{
		BaseB &baseB = dynamic_cast<BaseB&>(p);
		(void)baseB;
		std::cout << "Reference of type B class" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cout << "Reference is not of type B class" << std::endl;
	}
	try
	{
		BaseC &baseC = dynamic_cast<BaseC&>(p);
		(void)baseC;
		std::cout << "Reference of type C class" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cout << "Reference is not of type C class" << std::endl;
	}
	return ;
}
