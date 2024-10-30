#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <exception>

template <typename T>
class Array {

public :
	class WrongIndexException : public std::exception
	{
		public :
			virtual const char *what() const throw() { return "Error : wrong index\n";}
	};
	Array() :_size(0), _array(NULL)
	{
		_array = new T[0];
	}
	Array(unsigned int size) :_size(size)
	{
		for (unsigned int i = 0; i < size; i++)
			_array[i] = NULL;
	}
	Array(Array const & src)
	{
		*this = src;
	}
	Array & operator=(Array const & src)
	{
		this->_size = src._size;
		delete [] _array;
		_array = new T[src._size] ;
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = src._array[i];
	}
	~Array();
	T & operator[](unsigned int i)
	{
		if (i >= _size)
			throw WrongIndexException();
		else
			return (this->_array[i]);
	}
private :

	unsigned int _size;
	T *_array;
};

#endif
