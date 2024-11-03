
#include "Span.hpp"
#include <algorithm>
#include <limits>

Span::Span()
{}

Span::Span(unsigned int n): _n(n)
{}

Span::~Span()
{}

Span::Span(Span const & src): _vecti(src._vecti), _n(src._n)
{}

Span& Span::operator=(Span const & src)
{
	if (this != &src)
	{
		_vecti = src._vecti;
		_n = src._n;
	}
	return (*this);
}

const char *Span::NoMoreSPaceException::what() const throw()
{
	return ("no more space in span, can't add another integrer\n");
}

const char *Span::NoEnoughNumberException::what() const throw()
{
	return ("not enough number to answer\n");
}

void Span::addNumber(int newNb)
{
	if (_vecti.size() < _n)
		_vecti.push_back(newNb);
	else
		throw NoMoreSPaceException();
}

void Span::addManyNumber(std::vector<int> &newvect)
{
	if (_vecti.size() + newvect.size() > _n)
		throw NoMoreSPaceException();
	std::vector<int>::iterator it = _vecti.begin() + _vecti.size();
	_vecti.insert(it, newvect.begin(), newvect.end());
}

int Span::shortestSpan()
{
	if (_vecti.size() < 2)
		throw NoEnoughNumberException();
	int result = std::numeric_limits<int>::max();
	std::sort(_vecti.begin(), _vecti.end());
	for (unsigned int i = 0; i < _vecti.size() - 1; i++)
		if (result > _vecti[i + 1] - _vecti[i])
			result = _vecti[i + 1] - _vecti[i];
	return (result);
}

int Span::longestSpan() const
{
	if (_vecti.size() < 2)
		throw NoEnoughNumberException();
	return (*std::max_element(_vecti.begin(), _vecti.end()) - *std::min_element(_vecti.begin(), _vecti.end()));
}
