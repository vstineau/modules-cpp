
#include "Fixed.hpp"

Fixed& Fixed::operator=(Fixed const & src)
{
	if (this !=  &src)
		this->_value = src.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed const & src)
{
	this->_value += src.getRawBits();
	return (*this);
}

//post incrementation
Fixed Fixed::operator++(int)
{
	Fixed before = *this;
	this->_value ++;
	return (before);
}

//pre incrementation
Fixed Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator-(Fixed const & src)
{
	this->_value -= src.getRawBits();
	return (*this);
}

//post decrementation
Fixed Fixed::operator--(int)
{
	Fixed before = *this;
	this->_value--;
	return (before);
}

//pre decrementation
Fixed Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator/(Fixed const & src)
{
	if (!src.getRawBits())
	{
		std::cout << "no division by 0 please\n";
		return (*this);
	}
	this->_value = (this->_value  << _mantissa ) / src.getRawBits();
	return (*this);
}

Fixed Fixed::operator*(Fixed const & src)
{
	this->_value = (this->_value * src.getRawBits()) >> _mantissa;
	return (*this);
}

bool Fixed::operator==(Fixed const & src) const
{
		if (this->_value == src.getRawBits())
			return true;
		return false;
}

bool Fixed::operator!=(Fixed const & src) const
{
		if (this->_value != src.getRawBits())
			return true;
		return false;
}

bool Fixed::operator>=(Fixed const & src) const
{
		if (this->_value >= src.getRawBits())
			return true;
		return false;
}

bool Fixed::operator>(Fixed const & src) const
{
		if (this->_value > src.getRawBits())
			return true;
		return false;
}

bool Fixed::operator<=(Fixed const & src) const
{
		if (this->_value <= src.getRawBits())
			return true;
		return false;
}

bool Fixed::operator<(Fixed const & src) const
{
		if (this->_value < src.getRawBits())
			return true;
		return false;
}

Fixed const & Fixed::min(Fixed const & one, Fixed const & two)
{
		if (one._value < two._value)
			return one;
		return two;
}

Fixed const & Fixed::max(Fixed const & one, Fixed const & two)
{
		if (one._value < two._value)
			return two;
		return one;
}

Fixed & Fixed::min(Fixed & one, Fixed & two)
{
		if (one._value < two._value)
			return one;
		return two;
}

Fixed & Fixed::max(Fixed & one, Fixed & two)
{
		if (one._value < two._value)
			return two;
		return one;
}

