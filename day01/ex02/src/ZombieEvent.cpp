#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(const std::string &type)
{
	_event_type = type;
	std::cout << "\n\tYou just created a wave of ";
	std::cout << _event_type << " zombies... Watch out!\n";
	return;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "\tThis wave is over... Hope you survived.\n\n";
	return;
}

Zombie *ZombieEvent::newZombie(const std::string &name)
{
	Zombie *new_zombie = new Zombie(name, _event_type);
	return new_zombie;
}

const std::string &ZombieEvent::getEventType() const
{
	return _event_type;
}
