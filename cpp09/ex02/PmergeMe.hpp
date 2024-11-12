#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>

class Pair
{
public :
	Pair(): _a(0), _b(0) {}
	~Pair() {}
	void setPair(int a, int b);
	int getA() const;
	int getB() const;
	void swap();
private :
		int _a;
		int _b;
};

void sort_vector(std::vector<int> &vect);
//void sort_deque(std::deque<int> &dq);

#endif
