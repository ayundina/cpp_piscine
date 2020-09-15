#include "../include/Enemy.hpp"

Enemy::Enemy(void)
{
	_type = "";
	_hp = 0;
	return;
}

Enemy::Enemy(const std::string &type, int hp)
{
	_type = type;
	_hp = hp;
	return;
}

Enemy::Enemy(const Enemy &enemy)
{
	_type = enemy._type;
	_hp = enemy._hp;
	return;
}

Enemy::~Enemy()
{
	return;
}

Enemy &Enemy::operator=(const Enemy &enemy)
{
	_type = enemy._type;
	_hp = enemy._hp;
	return *this;
}

std::string Enemy::getType(void) const
{
	return _type;
}

int Enemy::getHP(void) const
{
	return _hp;
}

void Enemy::takeDamage(int damage)
{
	if (_hp > 0)
	{
		_hp = (_hp - damage < 0) ? (0) : (_hp - damage);
	}
	return;
}

std::ostream &operator<<(std::ostream &os, const Enemy &enemy)
{
	os << "enemy " << enemy.getType() << " has ";
	os << enemy.getHP() << " hit points\n";
	return os;
}