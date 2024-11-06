
#include "BitcoinExchange.hpp"
#include <iostream>
#include <cstdlib>

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
	int y = 0;
	int m = 0;
	int d = 0;
	float value = 0;

	pos = file.find("\n", offset);
	offset += pos + 1;
	while (pos != std::string::npos)
	{
		pos = file.find("-", offset);
		if (pos == std::string::npos)
			break ;
		temp = file.substr(offset, pos - offset);
		y = std::atoi(temp.c_str());
		offset = pos + 1;
		pos = file.find("-", offset);
		if (pos == std::string::npos)
			break ;
		temp = file.substr(offset, pos - offset);
		m = std::atoi(temp.c_str());
		offset = pos + 1;
		pos = file.find(",", offset);
		if (pos == std::string::npos)
			break ;
		temp = file.substr(offset, pos - offset);
		d = std::atoi(temp.c_str());
		offset = pos + 1;
		pos = file.find("\n", offset);
		if (pos == std::string::npos)
			break ;
		temp = file.substr(offset, pos - offset);
		offset = pos + 1;
		value = std::atof(temp.c_str());
		date.setDate(y, m, d);
		db[date] = value;
	}
//	for (std::map<Date, float>::iterator it = db.begin(); it != db.end(); it++)
//	{
//	  std::cout << it->first << " " << it->second << std::endl;
//	}
}
