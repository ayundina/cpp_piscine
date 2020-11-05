#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	_name = name;
	_type = type;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "... And... " << _name << " is gone\n";
	return;
}

void Zombie::announce(std::string type) const
{
	std::cout << "\t" << type << " zombie " << _name << " says 'Braaaaaaiiins!'";
	return;
}

const std::string &Zombie::getType() const
{
	return _type;
}

const std::string &Zombie::getName() const
{
	return _name;
}
