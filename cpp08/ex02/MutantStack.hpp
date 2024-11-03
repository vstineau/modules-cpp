#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack  : public std::stack<T> {

public :
	MutantStack(){}
	~MutantStack(){}
	MutantStack(MutantStack const & src): std::stack<T>(src) {}
	MutantStack & operator=(MutantStack const & src)
	{
		std::stack<T>::operator=(src);
		return (*this);
	}
	typedef 	typename std::stack<T>::container_type::iterator iterator;
	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
};

#endif
