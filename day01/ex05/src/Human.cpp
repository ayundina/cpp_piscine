#include "Human.hpp"

Human::Human()
{
	return;
}

Human::~Human()
{
	return;
}

std::string Human::identify() const
{
	std::string str = _brain.identify();
	return str;
}

Brain Human::getBrain() const
{
	return _brain;
}
