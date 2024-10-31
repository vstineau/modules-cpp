#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
template <typename T, typename C>
void iter(T *array, size_t length, void(*funct)(C &arg))
{
	for (size_t i = 0; i < length; i++)
		funct(array[i]);
}

#endif
