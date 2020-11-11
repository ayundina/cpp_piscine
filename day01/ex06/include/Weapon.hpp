#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
private:
	std::string _type;

public:
	Weapon();
	Weapon(const std::string &weapon);
	~Weapon();

	void setType(const std::string &type);
	const std::string &getType() const;
};

#endif