#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	std::srand(std::time(nullptr));
	std::cout << std::endl;
	std::cout << "	You just created a wave of zombies... Watch out!";
	std::cout << std::endl;
	return;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "	This wave is over... Hope you survived.";
	std::cout << std::endl;
	std::cout << std::endl;
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

std::string ZombieEvent::randomName()
{
	std::string name_list[MAX_NAMES] = {
			"Dave",
			"Silvia",
			"Martin",
			"Frodo",
			"Giliam",
			"Pouncer",
			"Shouter",
			"Lanky",
			"Hacker",
			"Fungus",
			"Grunter",
			"Bill",
			"Sus",
			"Marla",
			"Sucker"};
	int random_num = std::rand() % MAX_NAMES;
	std::string random_name = name_list[random_num];
	return random_name;
}

void ZombieEvent::randomChump()
{
	Zombie zombie(randomName(), _type);
	zombie.announce();
	return;
}
