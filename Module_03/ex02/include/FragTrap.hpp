/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 00:15:14 by kpourcel          #+#    #+#             */
/*   Updated: 2025/03/28 11:04:06 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

protected :

public:
// forme cano
	FragTrap();
	~FragTrap();
	FragTrap(const std::string &name);
	FragTrap(FragTrap const &other);
	FragTrap & operator=(FragTrap const &other);
// fonction membre
	void	highFivesGuys(void);

};

#endif