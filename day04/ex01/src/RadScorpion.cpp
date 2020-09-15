#include "../include/RadScorpion.hpp"

RadScorpion::RadScorpion(void)
{
	_type = "Rad Scorpion";
	_hp = 80;
	std::cout << "* click click click *\n";
	return;
}

RadScorpion::RadScorpion(const std::string &type, int hp)
{
	_type = type;
	_hp = hp;
	std::cout << "* click click click *\n";
	return;
}

RadScorpion::RadScorpion(const RadScorpion &rad_scorpion)
{
	_type = rad_scorpion._type;
	_hp = rad_scorpion._hp;
	std::cout << "* click click click *\n";
	return;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
	return;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &rad_scorpion)
{
	_type = rad_scorpion._type;
	_hp = rad_scorpion._hp;
	return *this;
}

void RadScorpion::takeDamage(int damage)
{
	this->Enemy::takeDamage(damage);
	return;
}
