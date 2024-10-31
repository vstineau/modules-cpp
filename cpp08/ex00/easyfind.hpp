#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int i)
{
	typename T::iterator  result = std::find(container.begin(), container.end(), i);
	if (result == container.end())
		throw std::exception();
	return (result);
}

#endif
