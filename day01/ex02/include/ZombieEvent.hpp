#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string _event_type;

public:
	ZombieEvent(const std::string &type);
	~ZombieEvent();

	Zombie *newZombie(const std::string &name);
	const std::string &getEventType() const;
};

#endif
