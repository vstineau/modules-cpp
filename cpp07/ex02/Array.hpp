#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array {

public :
	class WrongIndexException : public std::exception
	{
		public :
			virtual const char *what() const throw() { return "Error : wrong index\n";}
	};
	Array() :_size(0)
	{
		_array = NULL;
	}
	Array(unsigned int size) :_size(size), _array(new T[size])
	{
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = T();
	}
	Array(Array const & src) : _size(src._size)
	{
		_array = new T[src._size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = T();
	}
	Array & operator=(Array const & src)
	{
		if (this != &src)
		{
			this->_size = src._size;
			if (_array != NULL)
				delete [] _array;
			_array = new T[src._size] ;
			for (unsigned int i = 0; i < _size; i++)
			{
				_array[i] = T();
				_array[i] = src._array[i];
			}
		}
			return (*this);
	}
	~Array()
	{
		if (_array)
			delete [] _array;
	}
	unsigned int size() const
	{
		return this->_size;
	}
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
