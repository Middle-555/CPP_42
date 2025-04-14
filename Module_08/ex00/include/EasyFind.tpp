#include "EasyFind.hpp"

template<typename T>
typename T::iterator easyfind(T &container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it != container.end())
		return it;
	throw std::runtime_error("Value not found in the container");
}

