#include "../include/Zombie.hpp"

void Zombie::announce(void) const
{
	std::cout << "\t" << _type << " zombie " << _name << " says 'Braaaaaaiiins!'\n";
	return;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	_type = "Generic";
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "\t... And... " << _name << " is gone\n";
	return;
}
