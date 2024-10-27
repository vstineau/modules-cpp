#ifndef BASE_HPP
# define BASE_HPP

class Base {

public :
	virtual ~Base(void);
	
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);
int rand3(void);

#endif
