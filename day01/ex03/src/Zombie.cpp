#include "Zombie.hpp"

Zombie::Zombie(const std::string &name)
{
	_name = name;
	_type = "Generic";
	return;
}

Zombie::~Zombie()
{
	std::cout << "\t... And... " << _name << " is gone\n";
	return;
}

void Zombie::announce() const
{
	std::cout << "\t" << _type << " zombie " << _name << " says 'Braaaaaaiiins!'\n";
	return;
}
