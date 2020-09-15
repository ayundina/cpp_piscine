#include "../include/PowerFist.hpp"

PowerFist::PowerFist(void)
{
	_name = "Power Fist";
	_apcost = 8;
	_damage = 50;
	return;
}

PowerFist::PowerFist(const std::string &name, int apcost, int damage)
{
	_name = name;
	_apcost = apcost;
	_damage = damage;
	return;
}

PowerFist::PowerFist(const PowerFist &pfist)
{
	_name = pfist._name;
	_apcost = pfist._apcost;
	_damage = pfist._damage;
	return;
}

PowerFist::~PowerFist(void)
{
	return;
}

PowerFist &PowerFist::operator=(const PowerFist &pfist)
{
	_name = pfist._name;
	_apcost = pfist._apcost;
	_damage = pfist._damage;
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
	return;
}
