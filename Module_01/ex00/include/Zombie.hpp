/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:17:00 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/26 12:24:16 by kpourcel         ###   ########.fr       */
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
 	Zombie(std::string name);
	~Zombie();

	void	announce(void);
	
};
	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);
#endif 