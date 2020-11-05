#include "main.hpp"

#define MAX_NAMES 15

std::string randomName(void)
{
	static int randomizer = 0;
	randomizer += 1;
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
	std::srand(std::time(nullptr) + randomizer);
	int random_num = std::rand() % MAX_NAMES;
	std::string random_name = name_list[random_num];
	return random_name;
}

void randomChump(ZombieEvent &event)
{
	std::string random_name = randomName();
	Zombie *zombie = event.newZombie(random_name);

	if (zombie != nullptr)
	{
		zombie->announce(event.getEventType());
		delete zombie;
	}
	return;
}

void startZombieWave(const int &num_zombies, const std::string &type)
{
	ZombieEvent event(type);
	for (int i = 0; i < num_zombies; i++)
	{
		randomChump(event);
	}
	return;
}