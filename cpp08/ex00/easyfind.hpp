#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>

template <typename T>
int easyfind(T &container, int i)
{
	int  result = std::find(container.begin(), container.end(), i);
	if (result != container.end())
		throw std::exception();
	return (result);
}

#endif
