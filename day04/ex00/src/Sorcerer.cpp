#include "../include/Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	return;
}

Sorcerer::Sorcerer(const std::string &name, const std::string &title)
{
	_name = name;
	_title = title;
	std::cout << _name << ", ";
	std::cout << _title << " is born!\n";
	return;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
	_name = sorcerer._name + "_copy";
	_title = sorcerer._title;
	std::cout << _name << ", ";
	std::cout << _title << " is born!\n";
	return;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", ";
	std::cout << _title << " is dead. Consequences will never be the same!\n";
	return;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &sorcerer)
{
	if (this != &sorcerer)
	{
		_name = _name + "=" + sorcerer._name;
		_title = sorcerer._title;
		std::cout << _name << ", ";
		std::cout << _title << " is born!\n";
	}
	return *this;
}

const std::string &Sorcerer::getName(void) const
{
	return _name;
}

const std::string &Sorcerer::getTitle(void) const
{
	return _title;
}

void Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
	return;
}

void Sorcerer::polymorph(const Peon &peon) const
{
	peon.getPolymorphed();
	return;
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer)
{
	os << "Intro: I am " << sorcerer.getName() << ", ";
	os << sorcerer.getTitle() << ", and I like ponies!\n";
	return os;
}