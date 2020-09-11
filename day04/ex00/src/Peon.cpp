#include "../include/Peon.hpp"

Peon::Peon(void)
{
	return;
}

Peon::Peon(const std::string &name)
{
	_name = name;
	std::cout << "Some random victim called " << _name;
	std::cout << " just appeared!\nZog zog.\n";
	return;
}

Peon::Peon(const Peon &peon)
{
	_name = peon._name + "_copy";
	std::cout << "Some random victim called " << _name;
	std::cout << " just appeared!\nZog zog.\n";
	return;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark...\n";
	return;
}

Peon &Peon::operator=(const Peon &peon)
{
	if (this != &peon)
	{
		_name = _name + "=" + peon._name;
		std::cout << "Some random victim called " << _name;
		std::cout << " just appeared!\nZog zog.\n";
	}
	return *this;
}

void Peon::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a pink pony!\n";
	return;
}

std::ostream &operator<<(std::ostream &os, const Peon &peon)
{
	os << "Intro: I am " << peon.getName();
	os << ", and I like otters!\n";
	return os;
}