
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <fstream>
#include <string>
#include <map>
#include "Date.hpp"

std::string	readfile(std::ifstream &ifs);
void fillMap(std::string file, std::map<Date, float> &bitcoinInfo);
void checkInput(std::string file, std::map<Date, float> &bitcoinInfo);
std::ostream &operator<<(std::ostream &o, Date const &d);
void checkInput(std::ifstream &ifs, std::map<Date, float> &db);

#endif
