#include "../include/Brain.hpp"
#include <sstream>

Brain::Brain(void)
{
	_iq = 100;
	_address = this;
	return;
}

Brain::~Brain(void)
{
	return;
}

std::string Brain::identify(void) const
{
	std::stringstream ss;
	ss << (const void *)_address;
	std::string brain_address_str = ss.str();
	return brain_address_str;
}
