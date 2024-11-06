
#ifndef DATE_HPP
# define DATE_HPP

class Date {

public:
	Date();
	Date(Date const & src);
	~Date();
	Date &operator=(Date const & src);
	unsigned int getYear() const;
	unsigned int getMonth() const;
	unsigned int getDay() const;
	void setDate(int y, int m, int d);
	bool operator==(Date const & src);
	bool operator<(Date const & src) const;

private:
	unsigned int _year;
	unsigned int _month;
	unsigned int _day;
};

#endif
