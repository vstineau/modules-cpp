#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
template <typename T>
void iter(T *array, size_t length, void(*funct)(T &arg))
{
	for (size_t i = 0; i < length; i++)
		funct(array[i]);
}

#endif
