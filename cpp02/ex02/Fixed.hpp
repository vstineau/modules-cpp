
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
	Fixed operator++(void);
	Fixed operator++(int);
	Fixed operator--(void);
	Fixed operator--(int);
	Fixed &operator=(const Fixed& src);
	Fixed operator+(const Fixed& src);
	Fixed operator-(const Fixed& src);
	Fixed operator/(const Fixed& src);
	Fixed operator*(const Fixed& src);
	bool operator>=(const Fixed& src) const;
	bool operator==(const Fixed& src) const;
	bool operator!=(const Fixed& src) const;
	bool operator<=(const Fixed& src) const;
	bool operator<(const Fixed& src) const;
	bool operator>(const Fixed& src) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed const &min(const Fixed& one, const Fixed& two);
	static Fixed const &max(const Fixed& one, const Fixed& two);
	static Fixed &min(Fixed& one, Fixed& two);
	static Fixed &max(Fixed& one, Fixed& two);

private:
	int _value;
	static const int _mantissa = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
