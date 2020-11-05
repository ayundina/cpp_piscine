#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(const int &number)
{
	_number = number;
	if (!(_horde = new Zombie *[_number + 1]))
		memoryErrorMessage();
	for (int i = 0; i < _number; i++)
	{
		if (!(_horde[i] = new Zombie(randomName())))
			memoryErrorMessage();
	}
	announce();
	return;
}

ZombieHorde::~ZombieHorde()
{
	for (int i = 0; i < _number; i++)
	{
		delete _horde[i];
	}
	delete[] _horde;
	return;
}

std::string ZombieHorde::randomName()
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

void ZombieHorde::memoryErrorMessage() const
{
	std::cout << "Error: out of memory\n";
	exit(1);
}

void ZombieHorde::announce() const
{
	for (int i = 0; i < _number; i++)
	{
		_horde[i]->announce();
	}
	return;
}
