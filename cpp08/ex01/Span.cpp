
#include "Span.hpp"

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

void Span::addNumber(int newNb)
{
	if (_vecti.size() < _n)
		_vecti.push_back(newNb);
	else
		throw NoMoreSPaceException();
}

const char *Span::NoMoreSPaceException::what() const throw()
{
	return ("no more space in span, can't add another integrer\n");
}

const char *Span::NoEnoughNumberException::what() const throw()
{
	return ("not enough number to answer\n");
}
