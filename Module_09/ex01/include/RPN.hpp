/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:20:11 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/21 15:39:37 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "TestUtils.hpp"


class RPN
{
private:
	std::stack<int> _stack;
public:
	RPN();
	RPN(RPN const &other);
	RPN& operator=(RPN const &other);
	~RPN();

	bool	isOperator(const std::string &token);
	bool	isValidTokens(const std::string &input);
	int	applyOperator(const std::string &op, int a, int b);
	int	EvaluateRPN(const std::string &input);
};
