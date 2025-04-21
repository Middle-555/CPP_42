/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:21:02 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/21 13:58:06 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN(){}
RPN::RPN(RPN const &other)
{
	*this = other;
}

RPN &RPN::operator=(RPN const &other)
{
	if (this != &other)
	{
		this->_stack = other._stack;
	}
	return *this;
}

RPN::~RPN(){}

bool	RPN::isValidTokens(const std::string &input)
{
	std::istringstream iss(input);
	std::string token;

	while (iss >> token)
	{
		if (token.length() == 1 && isdigit(token[0]))
			continue;
		if (isOperator(token))
			continue;

		return false;
	}
	return true;
}

bool	RPN::isOperator(const std::string &token)
{
	return token == "+" || token == "-" || token == "*" || token == "/";
}

int	RPN::applyOperator(const std::string &op, int a, int b)
{
	if (op == "+")
		return a + b;
	if (op == "-")
		return a - b;
	if (op == "*")
		return a * b;
	if (op == "/")
	{
		if (b == 0)
			throw std::runtime_error("Error: division by zero");
		return a / b;
	}
	throw std::runtime_error("Unknown operator: " + op);
}

int	RPN::EvaluateRPN(const std::string &input)
{
	std::istringstream iss(input);
	std::string token;

	while (iss >> token)
	{
		if (token.length() == 1 && isdigit(token[0]))
			_stack.push(token[0] - '0');
		else if (isOperator(token))
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Error: not enough operands");

			int b = _stack.top(); _stack.pop();
			int a = _stack.top(); _stack.pop();

			int result = applyOperator(token, a, b);
			_stack.push(result);
		}
		else
			throw std::runtime_error("Error: invalid token");
	}
	if (_stack.size() != 1)
		throw std::runtime_error("Error: invalid input");

	return _stack.top();
}
