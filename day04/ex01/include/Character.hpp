#ifndef CHARACHTER_H
#define CHARACHTER_H

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character
{
private:
protected:
	std::string _name;
	int _action_points;
	AWeapon *_aweapon;

public:
	Character(void);
	Character(const std::string &name);
	Character(const Character &character);
	~Character();

	Character &operator=(const Character &character);

	void recoverAP(void);
	void equip(AWeapon *aweapon);
	void attack(Enemy *enemy);
	void useAP(int cost);
	std::string getName(void) const;
	int getAP(void) const;
	std::string getAWeapon(void) const;
};

std::ostream &operator<<(std::ostream &os, const Character &character);

#endif