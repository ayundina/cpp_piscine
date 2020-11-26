#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{
	_iq = 100;
	return;
}

Brain::~Brain()
{
	return;
}

std::string Brain::identify() const
{
	std::stringstream ss;

	ss << this;
	std::string brain_address_str = ss.str();
	return brain_address_str;
}
