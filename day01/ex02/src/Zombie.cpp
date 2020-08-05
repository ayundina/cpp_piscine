#include "../include/Zombie.hpp"

void Zombie::announce(std::string type) const
{
	std::cout << "\t" << type << " zombie " << _name << " says 'Braaaaaaiiins!'";
	return;
}

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
