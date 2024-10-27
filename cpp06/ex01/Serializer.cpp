
#include "Serializer.hpp"

Serializer::Serializer()
{}

Serializer::~Serializer()
{}

Serializer::Serializer(Serializer const & src)
{
	(void)src;
}

Serializer& Serializer::operator=(Serializer const & src)
{
	(void)src;
	return *this;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data * Serializer::deSerialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
