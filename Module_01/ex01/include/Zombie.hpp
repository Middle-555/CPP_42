/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:49:54 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/20 14:48:15 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
class Zombie
{
private:
	std::string	name;
public:
 	Zombie();
	~Zombie();

	void	announce(void);
	void	setName(std::string name);
	
};
Zombie* zombieHorde(int N, std::string name);

#endif 