
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include <string>

typedef struct s_Data
{
	std::string data;
} Data;

class Serializer {

public:
	static uintptr_t serialize(Data *ptr);
	static Data *deSerialize(uintptr_t raw);

private:
	Serializer();
	Serializer(Serializer const & src);
	~Serializer();
	Serializer &operator=(Serializer const & src);
};

#endif
