#ifndef RADSCORPION_H
#define RADSCORPION_H

#include "../include/Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy
{
private:
public:
	RadScorpion(void);
	RadScorpion(const std::string &type, int hp);
	RadScorpion(const RadScorpion &rad_scorpion);
	~RadScorpion();

	RadScorpion &operator=(const RadScorpion &rad_scorpion);

	virtual void takeDamage(int damage);
};

#endif