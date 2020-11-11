#include "Weapon.hpp"

Weapon::Weapon()
{
	_type = "initial weapon type";
	return;
}

Weapon::Weapon(const std::string &weapon_type)
{
	_type = weapon_type;
	return;
}

Weapon::~Weapon()
{
	return;
}

void Weapon::setType(const std::string &type)
{
	_type = type;
	return;
}

const std::string &Weapon::getType() const
{
	return _type;
}
