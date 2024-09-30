
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(const Fixed& src);
	~Fixed();
	Fixed &operator=(const Fixed& rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int _value;
	static const int _mantissa = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
