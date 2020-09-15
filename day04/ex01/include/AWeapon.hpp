#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>

class AWeapon
{
private:
protected:
	std::string _name;
	int _apcost;
	int _damage;

public:
	AWeapon(void);
	AWeapon(const std::string &name, int apcost, int damage);
	AWeapon(const AWeapon &aweapon);
	virtual ~AWeapon();

	AWeapon &operator=(const AWeapon &aweapon);

	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif