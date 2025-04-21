/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpourcel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:53:31 by kpourcel          #+#    #+#             */
/*   Updated: 2025/04/21 15:34:03 by kpourcel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

void	testRPN(const std::string& expr)
{
	std::cout << "🧮 Testing expression: \"" << expr << "\"" << std::endl;
	RPN calc;
	try
	{
		if (!calc.isValidTokens(expr))
		{
			std::cerr << "❌ Invalid tokens in expression." << std::endl;
			return;
		}
		int result = calc.EvaluateRPN(expr);
		std::cout << "✅ Result: " << result << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "❌ Error: " << e.what() << std::endl;
	}
	std::cout << "----------------------------------------" << std::endl;
}

int	main()
{
	testRPN("3 4 +");               // ✅ 7
	testRPN("5 1 2 + 4 * + 3 -");   // ✅ 14
	testRPN("8 9 * 9 - 9 - 9 - 4 - 1 +"); // ✅
	testRPN("4 2 /");               // ✅ 2
	testRPN("4 0 /");               // ❌ division par zéro
	testRPN("3 +");                 // ❌ pas assez d’opérandes
	testRPN("3 4");                 // ❌ trop d’opérandes restantes
	testRPN("34 +");                // ❌ nombre invalide
	testRPN("3 4 ^");               // ❌ opérateur inconnu
	testRPN(" ");                   // ❌ vide
	testRPN("- - - 1 2 3");
	testRPN("(1 + 1)");
	return 0;
}
