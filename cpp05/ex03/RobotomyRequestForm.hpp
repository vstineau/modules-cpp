
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm {

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const & src);
	void execute(Bureaucrat &bureaucrat) const;

private:
	RobotomyRequestForm();
};

int rand_0_100();

#endif
