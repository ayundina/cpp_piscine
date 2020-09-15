#include "../include/SuperMutant.hpp"

SuperMutant::SuperMutant(void)
{
	_type = "Super Mutant";
	_hp = 170;
	std::cout << "Gaaah. Me want smash heads!\n";
	return;
}

SuperMutant::SuperMutant(const std::string &type, int hp)
{
	_type = type;
	_hp = hp;
	std::cout << "Gaaah. Me want smash heads!\n";
	return;
}

SuperMutant::SuperMutant(const SuperMutant &super_mutant)
{
	_type = super_mutant._type;
	_hp = super_mutant._hp;
	std::cout << "Gaaah. Me want smash heads!\n";
	return;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh...\n";
	return;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &super_mutant)
{
	_type = super_mutant._type;
	_hp = super_mutant._hp;
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	this->Enemy::takeDamage(damage - 3);
	return;
}
