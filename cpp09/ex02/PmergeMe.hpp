#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <vector>
#include <ctime>
#include <deque>

typedef struct s_time
{
	std::clock_t start;
	std::clock_t end;
} t_time;

std::clock_t sort_vector(std::vector<int> &vect);

#endif
