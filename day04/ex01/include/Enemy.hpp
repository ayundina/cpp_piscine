#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy
{
private:
protected:
	std::string _type;
	int _hp;

public:
	Enemy(void);
	Enemy(const std::string &type, int hp);
	Enemy(const Enemy &enemy);
	virtual ~Enemy();

	Enemy &operator=(const Enemy &enemy);

	std::string getType(void) const;
	int getHP(void) const;
	virtual void takeDamage(int damage);
};

std::ostream &operator<<(std::ostream &os, const Enemy &enemy);

#endif