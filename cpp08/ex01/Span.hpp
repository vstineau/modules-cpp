
#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <exception>

class Span {

public:
	class NoMoreSPaceException : std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class NoEnoughNumberException : std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	Span(unsigned int n);
	Span(Span const & src);
	~Span();
	Span &operator=(Span const & src);
	void addNumber(int newNb);
	int shortestSpan();
	int longestSpan();

private:
	Span();
	std::vector<int> _vecti;
	unsigned int _n;
};

#endif
