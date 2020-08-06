#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"

#define MAX_NAMES 15

class ZombieHorde
{
public:
	Zombie **_horde;

	ZombieHorde(int number);
	~ZombieHorde(void);

private:
	int _number;
	void announce(void) const;
	void memoryErrorMessage(void) const;
	std::string randomName(void);
};

#endif
