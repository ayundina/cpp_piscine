#include "../include/PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
{
	_name = "Plasma Rifle";
	_apcost = 5;
	_damage = 21;
	return;
}

PlasmaRifle::PlasmaRifle(const std::string &name, int apcost, int damage)
{
	_name = name;
	_apcost = apcost;
	_damage = damage;
	return;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &prifle)
{
	_name = prifle._name;
	_apcost = prifle._apcost;
	_damage = prifle._damage;
	return;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &prifle)
{
	_name = prifle._name;
	_apcost = prifle._apcost;
	_damage = prifle._damage;
	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
	return;
}
