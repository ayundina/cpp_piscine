#include "Zombie.hpp"

Zombie::Zombie(const std::string &name)
{
	_name = name;
	_type = "Generic";
	return;
}

Zombie::~Zombie()
{
	std::cout << "\t... And... " << _name << " is gone";
	std::cout << std::endl;
	return;
}

void Zombie::announce() const
{
	std::cout << "\t" << _type << " zombie " << _name << " says 'Braaaaaaiiins!'";
	std::cout << std::endl;
	return;
}
