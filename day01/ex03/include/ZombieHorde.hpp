#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"
#include <ctime>	 // std::time()
#include <cstdlib> //std::srand()

#define MAX_NAMES 15

class ZombieHorde
{
private:
	int _number;
	Zombie **_horde;

	void announce() const;
	void outOfMemoryErrorMessage() const;
	std::string randomName();

public:
	ZombieHorde(const int &number);
	~ZombieHorde();
};

#endif
