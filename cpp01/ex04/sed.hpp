#ifndef SED_HPP
# define SED_HPP


#include <string>
#include <fstream>

std::string	readfile(std::ifstream &ifs);
void	replaceandfil(std::string data, std::string s1, std::string s2, std::ofstream &ofs);

#endif
