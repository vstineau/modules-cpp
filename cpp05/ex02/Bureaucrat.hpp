
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class AForm;

class Bureaucrat {

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
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat(void);
	Bureaucrat &operator=(Bureaucrat const & src);
	std::string const getName(void) const;
	unsigned int getGrade(void) const;
	void upgrade();
	void downgrade();
	void signForm(AForm & form);

private:
	Bureaucrat(void);
	std::string const _name;
	unsigned int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif
