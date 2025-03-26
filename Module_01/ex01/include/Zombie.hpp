/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:49:54 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/26 12:58:28 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
class Zombie
{
private:
	std::string	_name;
public:
 	Zombie();
	~Zombie();

	void		announce(void);
	void		setName(std::string name);
	std::string	getName() const;
	
};
Zombie* zombieHorde(int N, std::string name);

#endif 