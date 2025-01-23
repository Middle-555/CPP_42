/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 17:55:43 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/23 18:49:04 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	HARL_HPP
# define 	HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
	void	debug( void );
	void 	info( void );
	void 	warning( void );
	void	error( void );
public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif