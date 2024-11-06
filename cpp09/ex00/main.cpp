#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "error: wrong argument number\n";
		return (1);
	}
	std:: ifstream ifs("data.csv");
	std:: ifstream ifs2(argv[1]);
	if (!ifs || !ifs2)
	{
		std::cerr << "can't open file\n";
		return (1);
	}
	std::map<Date, float> bitcoinInfo;
	std::string file = readfile(ifs);
	std::string input = readfile(ifs2);
	fillMap(file, bitcoinInfo);
}
