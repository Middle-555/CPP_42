/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:30:46 by kpourcel          #+#    #+#             */
/*   Updated: 2025/01/07 18:21:10 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "main.hpp"
class PhoneBook
{
private:
	Contact repertory[8];
	int	index;
public:
	PhoneBook();
	~PhoneBook();

	void	add();
	void	search();
	void	printRepertory(Contact contact);
};

#endif
