#include "Zombie.hpp"

Zombie::Zombie(const std::string &name, const std::string &type)
{
	_name = name;
	_type = type;
	return;
}

Zombie::~Zombie()
{
	std::cout << "... And... " << _name << " is gone\n";
	return;
}

void Zombie::announce() const
{
	std::cout << "\t" << _type << " zombie " << _name << " says 'Braaaaaaiiins!'";
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
