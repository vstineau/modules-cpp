
#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

class Form {

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
	Form(std::string name, unsigned int gts, unsigned int gte);
	Form(Form const & src);
	~Form();
	Form &operator=(Form const & src);
	std::string const getName(void) const;
	unsigned int getGte(void) const;
	unsigned int getGts(void) const;
	bool	getStatus() const;
	void beSigned(Bureaucrat const &bureaucrat);

private:
	Form();
	std::string const _name;
	bool	_signed;
	unsigned int const _gradeToSign;
	unsigned int const _gradeToExecute;
};

std::ostream & operator<<(std::ostream & o, Form const & i);

#endif
