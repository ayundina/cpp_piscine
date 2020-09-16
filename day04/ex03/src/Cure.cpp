#include "../include/Cure.hpp"

Cure::Cure()
{
	_type = "cure";
	_xp = 0;
	return;
}

Cure::Cure(const std::string &type)
{
	_type = type;
	_xp = 0;
	return;
}

Cure::Cure(const Cure &c)
{
	_type = c._type;
	_xp = c._xp;
	return;
}

Cure &Cure::operator=(const Cure &c)
{
	_type = c._type;
	_xp = c._xp;
	return *this;
}

Cure::~Cure()
{
	return;
}

AMateria *Cure::clone() const
{
	AMateria *cure = new Cure();
	return cure;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
	_xp += 10;
	return;
}
