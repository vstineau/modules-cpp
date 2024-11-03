
#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <exception>

class Span {

public:
	class NoMoreSPaceException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class NoEnoughNumberException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	Span(unsigned int n);
	Span(Span const & src);
	~Span();
	Span &operator=(Span const & src);
	void addNumber(int newNb);
	void addManyNumber(std::vector<int> &newvect);
	int shortestSpan();
	int longestSpan() const;

private:
	Span();
	std::vector<int> _vecti;
	unsigned int _n;
};

#endif
