
#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class AForm {

public:
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	AForm(std::string name, unsigned int gts, unsigned int gte, std::string target);
	AForm(AForm const & src);
	virtual ~AForm();
	AForm &operator=(AForm const & src);
	std::string const getName(void) const;
	unsigned int getGte(void) const;
	unsigned int getGts(void) const;
	bool	getStatus() const;
	void beSigned(Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat &bureaucrat) const = 0;

protected:
	AForm();
	std::string const _name;
	bool	_signed;
	unsigned int const _gradeToSign;
	unsigned int const _gradeToExecute;
	std::string  _target;
};

std::ostream & operator<<(std::ostream & o, AForm const & i);

#endif
