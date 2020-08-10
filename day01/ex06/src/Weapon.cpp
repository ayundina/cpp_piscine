#include "../include/Weapon.hpp"

// default constructor
Weapon::Weapon(void)
{
	_type = "initial weapon type";
	return;
}

Weapon::Weapon(std::string weapon_type)
{
	_type = weapon_type;
	return;
}

Weapon::~Weapon(void)
{
	return;
}

void Weapon::setType(std::string type)
{
	_type = type;
	return;
}

std::string &Weapon::getType(void)
{
	return _type;
}

// std::string _weapon;