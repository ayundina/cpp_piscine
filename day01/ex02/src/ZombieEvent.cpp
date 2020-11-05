#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(const std::string &type)
{
	setZombieType(type);
	std::cout << "\n\tYou just created a wave of ";
	std::cout << _type << " zombies... Watch out!\n";
	return;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "\tThis wave is over... Hope you survived.\n\n";
	return;
}

void ZombieEvent::setZombieType(const std::string &type)
{
	_type = type;
	return;
}

Zombie *ZombieEvent::newZombie(const std::string &name)
{
	Zombie *new_zombie = new Zombie(name, _type);
	return new_zombie;
}

const std::string &ZombieEvent::getEventType() const
{
	return _type;
}
