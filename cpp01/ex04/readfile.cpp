#include "sed.hpp"

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

void	replaceandfil(std::string data, std::string s1, std::string s2, std::ofstream &ofs)
{
	size_t pos;
	size_t offset = 0;
	if (s1 != s2 && !s1.empty())
	{
		pos = data.find(s1, offset);
		while (pos != std::string::npos)
		{
			data.erase(pos, s1.length());
			data.insert(pos, s2);
			offset = pos + s1.length();
			pos = data.find(s1, offset);
		}
	}
	ofs << data;
}
