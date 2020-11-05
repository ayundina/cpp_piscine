#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string _type;

public:
	ZombieEvent(const std::string &type);
	~ZombieEvent();

	void setZombieType(const std::string &type);
	Zombie *newZombie(const std::string &name);
	const std::string &getEventType() const;
};

#endif
