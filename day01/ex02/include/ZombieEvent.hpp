#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include "Zombie.hpp"
#include <ctime>	 //std::srand()
#include <cstdlib> //std::ctime()

#define MAX_NAMES 15

class ZombieEvent
{
private:
	std::string _type;

	std::string randomName();

public:
	ZombieEvent();
	~ZombieEvent();

	void setZombieType(const std::string &type);
	Zombie *newZombie(const std::string &name);
	void randomChump();
};

#endif
