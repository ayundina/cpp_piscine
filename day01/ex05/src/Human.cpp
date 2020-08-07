#include "../include/Human.hpp"

Human::Human(void)
{
	return;
}

Human::~Human(void)
{
	return;
}

std::string Human::identify(void) const
{
	std::string str = _brain.identify();
	return str;
}

Brain Human::getBrain(void) const
{
	return _brain;
}
