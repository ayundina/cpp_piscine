#include "../include/AWeapon.hpp"

AWeapon::AWeapon(void)
{
	_name = "";
	_apcost = 0;
	_damage = 0;
	return;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
{
	_name = name;
	_apcost = apcost;
	_damage = damage;
	return;
}

AWeapon::AWeapon(const AWeapon &aweapon)
{
	_name = aweapon._name;
	_apcost = aweapon._apcost;
	_damage = aweapon._damage;
	return;
}

AWeapon::~AWeapon()
{
	return;
}

AWeapon &AWeapon::operator=(const AWeapon &aweapon)
{
	_name = aweapon._name;
	_apcost = aweapon._apcost;
	_damage = aweapon._damage;
	return *this;
}

std::string AWeapon::getName() const
{
	return _name;
}

int AWeapon::getAPCost() const
{
	return _apcost;
}

int AWeapon::getDamage() const
{
	return _damage;
}
