
#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include <string>

class Intern {

public:
	Intern();
	Intern(Intern const & src);
	~Intern();
	Intern &operator=(Intern const & src);
	AForm *makeForm(std::string name, std::string target);

private:
};

#endif
