#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
{
	_weapon = nullptr;
	_name = name;
	return;
}

HumanB::~HumanB()
{
	return;
}

void HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon to attack" << std::endl;
	return;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
	return;
}
