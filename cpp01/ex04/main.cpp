#include <iostream>
#include "sed.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "invalid number of argument" << std::endl;
		return (1);
	}
	std::string file = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream ifs(file.c_str());
	if (!ifs)
	{
		std::cout << "file does not exist" << std::endl;
		return (1);
	}
	file.append(".replace");
	std::ofstream ofs(file.c_str());
	file = readfile(ifs);
	replaceandfil(file, s1, s2, ofs);
}
