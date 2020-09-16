#include "../include/Ice.hpp"

Ice::Ice()
{
	_type = "ice";
	_xp = 0;
	return;
}

Ice::Ice(const std::string &type)
{
	_type = type;
	_xp = 0;
	return;
}

Ice::Ice(const Ice &i)
{
	_type = i._type;
	_xp = i._xp;
	return;
}

Ice &Ice::operator=(const Ice &i)
{
	_type = i._type;
	_xp = i._xp;
	return *this;
}

Ice::~Ice()
{
	return;
}

AMateria *Ice::clone() const
{
	AMateria *ice = new Ice();
	return ice;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	_xp += 10;
	return;
}
