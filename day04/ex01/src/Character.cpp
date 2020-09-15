#include "../include/Character.hpp"

Character::Character(void)
{
	_name = "";
	_action_points = 40;
	_aweapon = nullptr;
	return;
}

Character::Character(const std::string &name)
{
	_name = name;
	_action_points = 40;
	_aweapon = nullptr;
	return;
}

Character::Character(const Character &character)
{
	_name = character._name;
	_action_points = character._action_points;
	_aweapon = character._aweapon;
	return;
}

Character::~Character()
{
	return;
}

Character &Character::operator=(const Character &character)
{
	_name = character._name;
	_action_points = character._action_points;
	_aweapon = character._aweapon;
	return *this;
}

void Character::recoverAP(void)
{
	_action_points = (_action_points + 10 > 40) ? (40) : (_action_points + 10);
	return;
}

void Character::equip(AWeapon *aweapon)
{
	_aweapon = aweapon;
	return;
}

void Character::useAP(int cost)
{
	_action_points -= cost;
	return;
}

void Character::attack(Enemy *enemy)
{
	if (_aweapon != nullptr && _action_points >= _aweapon->getAPCost())
	{
		std::cout << _name << " attacks " << enemy->getType();
		std::cout << " with a " << _aweapon->getName() << "\n";
		_aweapon->attack();
		useAP(_aweapon->getAPCost());
		enemy->takeDamage(_aweapon->getDamage());
		if (enemy->getHP() == 0)
			delete enemy;
	}
	else
	{
		if (_aweapon == nullptr)
			std::cout << "No weapon, no attack\n";
		else
			std::cout << _action_points << " action points is not enough to attack\n";
	}
	return;
}

std::string Character::getName(void) const
{
	return _name;
}

int Character::getAP(void) const
{
	return _action_points;
}

std::string Character::getAWeapon(void) const
{
	if (_aweapon == nullptr)
		return "is unarmed";
	return "wields a " + _aweapon->getName();
}

std::ostream &operator<<(std::ostream &os, const Character &character)
{
	os << character.getName() << " has ";
	os << character.getAP() << " action points and ";
	os << character.getAWeapon() << "\n";
	return os;
}
