#include "../include/Victim.hpp"

Victim::Victim(void)
{
	return;
}

Victim::Victim(const std::string &name)
{
	_name = name;
	std::cout << "Some random victim called " << _name;
	std::cout << " just appeared!\n";
	return;
}

Victim::Victim(const Victim &victim)
{
	_name = victim._name + "_copy";
	std::cout << "Some random victim called " << _name;
	std::cout << " just appeared!\n";
	return;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name;
	std::cout << " just died for no apparent reason!\n";
	return;
}

Victim &Victim::operator=(const Victim &victim)
{
	if (this != &victim)
	{
		_name = _name + "=" + victim._name;
		std::cout << "Some random victim called " << _name;
		std::cout << " just appeared!\n";
	}
	return *this;
}

const std::string &Victim::getName(void) const
{
	return _name;
}

void Victim::getPolymorphed(void) const
{
	std::cout << _name << " has been turned into a cute little sheep!\n";
	return;
}

std::ostream &operator<<(std::ostream &os, const Victim &victim)
{
	os << "Intro: I am " << victim.getName();
	os << ", and I like otters!\n";
	return os;
}