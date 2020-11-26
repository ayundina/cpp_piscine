#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(const int &number)
{
	_number = number;
	std::srand(std::time(NULL));

	if (!(_horde = new Zombie *[_number]))
		outOfMemoryErrorMessage();
	for (int i = 0; i < _number; i++)
	{
		if (!(_horde[i] = new Zombie(randomName())))
			outOfMemoryErrorMessage();
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

void ZombieHorde::outOfMemoryErrorMessage() const
{
	std::cout << "Error: out of memory";
	std::cout << std::endl;
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
