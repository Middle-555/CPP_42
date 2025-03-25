/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:47:07 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/25 16:35:26 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main()
{
	randomChump("Zombie 1");

	Zombie* zonb = newZombie("zonb");
	zonb->announce();

	delete(zonb);
	return (0);
}