#include "../include/AMateria.hpp"

AMateria::AMateria()
{
	_type = "";
	_xp = 0;
	return;
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
	_xp = 0;
	return;
}

AMateria::AMateria(const AMateria &m)
{
	_type = m._type;
	_xp = m._xp;
	return;
}

AMateria &AMateria::operator=(const AMateria &m)
{
	_type = m._type;
	_xp = m._xp;
	return *this;
}

AMateria::~AMateria()
{
	return;
}

const std::string &AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}
