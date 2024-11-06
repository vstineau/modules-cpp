
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <fstream>
#include <string>
#include <map>
#include "Date.hpp"

std::string	readfile(std::ifstream &ifs);
void fillMap(std::string file, std::map<Date, float> &bitcoinInfo);
std::ostream &operator<<(std::ostream &o, Date const &d);

#endif
