
#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {

public:
	Harl();
	~Harl();
	void complain(std::string level);

private:
	typedef struct s_cmp
	{
		void (Harl::*f)();
		std::string _level;
	}	t_cmp;
	void	debug();
	void	info();
	void	warning();
	void	error();
	t_cmp _complain[4];
};

#endif
