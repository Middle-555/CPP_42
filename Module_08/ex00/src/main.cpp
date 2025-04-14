#include "../include/EasyFind.hpp"

int	main(void)
{

	std::vector<int> v;
	v.push_back(1);
	v.push_back(16);
	v.push_back(55);
	v.push_back(112);
	v.push_back(431);

	printTitle("Test with std::vector");
	std::cout << GREEN << "Vector content: " << RESET;
	std::for_each(v.begin(), v.end(), printInt);
	std::cout << std::endl;

	try 
	{
		int n = 112;
		std::cout << BLUE << "Searching for " << n << "..." << RESET << std::endl;
		std::vector<int>::iterator it = easyfind(v, n);
		std::cout << GREEN << "Found: " << *it << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

	// Test 2 : valeur absente
	try
	{
		int n = 999;
		std::cout << BLUE << "Searching for " << n << "..." << RESET << std::endl;
		std::vector<int>::iterator it = easyfind(v, n);
		std::cout << GREEN << "Found: " << *it << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

	std::list<int> l;
	l.push_back(1);
	l.push_back(16);
	l.push_back(55);
	l.push_back(112);
	l.push_back(431);

	printTitle("Test with std::list");
	std::cout << GREEN << "List content: " << RESET;
	std::for_each(l.begin(), l.end(), printInt);
	std::cout << std::endl;

	try 
	{
		int n = 431;
		std::cout << BLUE << "Searching for " << n << "..." << RESET << std::endl;
		std::list<int>::iterator it = easyfind(l, n);
		std::cout << GREEN << "Found: " << *it << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

	// Test 4 : valeur absente
	try
	{
		int n = -42;
		std::cout << BLUE << "Searching for " << n << "..." << RESET << std::endl;
		std::list<int>::iterator it = easyfind(l, n);
		std::cout << GREEN << "Found: " << *it << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << '\n';
	}

	return 0;
}