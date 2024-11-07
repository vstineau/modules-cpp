
#include "BitcoinExchange.hpp"
#include <iostream>
#include <cstdlib>

static	void handle_error(int i)
{
	switch (i)
	{
		case 0:
			return ;
		case 1:
		{
			std::cout << "Error: not a positive number\n";
			return ;
		}
		case 2:
		{
			std::cout << "Error: too large number\n";
			return ;
		}
		case 3:
		{
			std::cout << "Error: wrong date format\n";
			return ;
		}
		case 4:
		{
			std::cout << "Error: no valid number found\n";
			return ;
		}
		case 5:
		{
			std::cout << "Error: date to old\n";
			return ;
		}
	}
}

static int search_data(std::map<Date, float> &db, Date &date, float &value)
{
	if (!value)
		return (4);
	if (value < 0)
		return (1);
	if (value > 1000.0)
		return (2);
	if (db[date])
	{
		std::cout << date << " => " << value << " = " << value * db[date] << std::endl;
		return (0);
	}
	for (std::map<Date, float>::reverse_iterator it = db.rbegin(); it != db.rend(); it++)
	{
		if (it->first < date)
		{
			std::cout << date << " => " << value << " = " << value * it->second << std::endl;
			return (0);
		}
	}
	return (5);
}

static int do_thing(std::string &line, std::map<Date, float> &db)
{
	if (line == "date | value" )
		return 0;
	Date date;
	std::string temp;
	size_t pos = 0;
	size_t offset = 0;
	float value = 0;

	pos = line.find("-", offset);
	if (pos == std::string::npos)
		return (3);
	temp = line.substr(offset, pos - offset);
	date._year = std::atoi(temp.c_str());
	offset = pos + 1;
	pos = line.find("-", offset);
	if (pos == std::string::npos)
		return (3);
	temp = line.substr(offset, pos - offset);
	date._month = std::atoi(temp.c_str());
	offset = pos + 1;
	pos = line.find("|", offset);
	if (pos == std::string::npos)
		return (3);
	temp = line.substr(offset, pos - offset);
	date._day = std::atoi(temp.c_str());
	offset = pos + 1;
	temp = line.substr(offset, temp.size() - pos);
	value = std::atof(temp.c_str());
	return (search_data(db, date, value));
}

std::string	readfile(std::ifstream &ifs)
{
	std::string str;
	std::string temp;
	while (std::getline(ifs, temp))
	{
		str.append(temp);
		str.append("\n");
	}
	return (str);
}

void fillMap(std::string file, std::map<Date, float> &db)
{
	size_t pos = 0;
	size_t offset = 0;
	std::string temp;
	Date date;
	float value = 0;

	pos = file.find("\n", offset);
	offset += pos + 1;
	while (pos != std::string::npos)
	{
		pos = file.find("-", offset);
		if (pos == std::string::npos)
			break ;
		temp = file.substr(offset, pos - offset);
		date._year = std::atoi(temp.c_str());
		offset = pos + 1;
		pos = file.find("-", offset);
		if (pos == std::string::npos)
			break ;
		temp = file.substr(offset, pos - offset);
		date._month = std::atoi(temp.c_str());
		offset = pos + 1;
		pos = file.find(",", offset);
		if (pos == std::string::npos)
			break ;
		temp = file.substr(offset, pos - offset);
		date._day = std::atoi(temp.c_str());
		offset = pos + 1;
		pos = file.find("\n", offset);
		if (pos == std::string::npos)
			break ;
		temp = file.substr(offset, pos - offset);
		offset = pos + 1;
		value = std::atof(temp.c_str());
		if (!date.checkDate())
			db[date] = value;
	}
}

void checkInput(std::ifstream &ifs, std::map<Date, float> &db)
{
	std::string temp;
	std::getline(ifs, temp);
	while (!temp.empty())
	{
		if (ifs.eof())
			break ;
		handle_error(do_thing(temp, db));
		std::getline(ifs, temp);
	}
}
