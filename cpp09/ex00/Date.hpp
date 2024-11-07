
#ifndef DATE_HPP
# define DATE_HPP

class Date {

public:
	Date();
	Date(Date const & src);
	~Date();
	Date &operator=(Date const & src);
	bool operator==(Date const & src);
	bool operator<(Date const & src) const;
	int checkDate() const;
	unsigned int _year;
	unsigned int _month;
	unsigned int _day;
private:
};

#endif
