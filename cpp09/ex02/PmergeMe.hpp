#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <ctime>

typedef struct s_time
{
	std::clock_t start;
	std::clock_t end;
} t_time;

template <typename C>
void merge(C &big, int left, int middle, int right)
{
	int l1 = middle - left + 1;
	int l2 = right - middle;

	C Left(l1);
	C Right(l2);

	for (int i = 0; i < l1; i++)
	{
		Left[i].first = big[left + i].first;
		Left[i].second = big[left + i].second;
	}
	for (int i = 0; i < l2; i++)
	{
		Right[i].first = big[middle + 1 + i].first;
		Right[i].second = big[middle + 1 + i].second;
	}
	int i = 0;
	int j = 0;
	int k = left;

	while (i < l1 && j < l2)
	{
		if (Left[i].first <= Right[j].first)
		{
			big[k].first = Left[i].first;
			big[k++].second = Left[i++].second;
		}
		else
		{
			big[k].first = Right[j].first;
			big[k++].second = Right[j++].second;
		}
	}
	while (i < l1)
	{
		big[k].first = Left[i].first;
		big[k++].second = Left[i++].second;
	}
	while (i < l2)
	{
		big[k].first = Left[j].first;
		big[k++].second = Left[j++].second;
	}
}

template <typename C>
void merge_sort(C &big, int left, int right)
{
	//use merge sort to sort the big vector
	if (left >= right)
		return ;
	int middle = left + (right - left) / 2;
	merge_sort(big, left, middle);
	merge_sort(big, middle + 1, right);
	merge(big, left, middle, right);
}

template <typename C>
void insert(C &big, C &small, C &jacob)
{
	int size = big.size();
	big.insert(big.begin(), small[0]);
	int previous_i = 0;
	for (typename C::iterator it = jacob.begin(); it != jacob.end() && *it <= size; it++)
	{
		int i = *it - 1;
		big.insert(std::lower_bound(big.begin(), big.end(), small[i]), small[i]);
		while (--i > previous_i)
			big.insert(std::lower_bound(big.begin(), big.end(), small[i]), small[i]);
		previous_i = *it - 1;
	}
	while (++previous_i < size)
	{
		big.insert(std::lower_bound(big.begin(), big.end(), small[previous_i]), small[previous_i]);
	}
}
template <typename C>
int jacobsthal(int n, C &jacob)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return jacob[n - 1] + 2 * jacob[n - 2];
}

template <typename C, typename P>
std::clock_t sort(C &cont)
{
	size_t size = cont.size();
	bool odd = cont.size() % 2;
	int last = 0;
	if (odd)
		last = cont[size - 1];
	size /= 2;
	P pairs;
	int j = 0;
	for (size_t i = 0; i < size; i++)
	{
		pairs.push_back(std::make_pair(cont[j], cont[j + 1]));
		j += 2;
	}
	for (typename P::iterator it = pairs.begin(); it != pairs.end(); it++)
		it->first < it->second ? std::swap(it->first, it->second): (void)it;
	C big;
	C small;
	C jacob;
	for (size_t i = 0; i < size; i++)
		jacob.push_back(jacobsthal(i, jacob));
	jacob.erase(jacob.begin(), jacob.begin() + 3);
	merge_sort(pairs, 0, pairs.size() - 1);
	for (typename P::iterator it = pairs.begin(); it < pairs.end(); it++)
	{
		big.push_back(it->first);
		small.push_back(it->second);
	}
	insert(big, small, jacob);
	if (odd)
		big.insert(std::lower_bound(big.begin(), big.end(), last), last);//insert last with binary search
	cont = big;
	return (std::clock());
}

#endif
