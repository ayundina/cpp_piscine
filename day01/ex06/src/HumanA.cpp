#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
		: _weapon(weapon),
			_name(name)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

void HumanA::attack() const
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
	return;
}
