#include "ZombieEvent.hpp"
#include <sstream>

void showMessage(int message)
{
	if (message == 1)
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "	Enter the NUMBER of zombies: ";
	}
	else if (message == 2)
	{
		std::cout << "	Enter the TYPE of zombies: ";
	}
	return;
}

void readNumber(int &number)
{
	std::string char_num = "";

	std::getline(std::cin, char_num);
	std::stringstream n(char_num);
	n >> number;
	return;
}

void readType(std::string &type)
{
	std::getline(std::cin, type);
	return;
}

void userChoice(int &number, std::string &type)
{
	system("clear");
	showMessage(1);
	readNumber(number);
	showMessage(2);
	readType(type);
	return;
}

void oneMore(ZombieEvent &zombie_event, const std::string &type, const std::string &name)
{
	zombie_event.setZombieType(type);
	Zombie *zombie = zombie_event.newZombie(name);
	zombie->announce();
	delete zombie;
	return;
}

void startZombieWave(const int &num_zombies, const std::string &type)
{
	ZombieEvent zombie_event;
	zombie_event.setZombieType(type);
	for (int i = 0; i < num_zombies; i++)
	{
		zombie_event.randomChump();
	}

	oneMore(zombie_event, "Generic", "Karl");
	oneMore(zombie_event, "Destructor", "Dipper");
	return;
}

int main()
{
	int number;
	std::string type;

	userChoice(number, type);
	while (1)
	{
		if (number > 0 && type.length() > 0)
		{
			startZombieWave(number, type);
			break;
		}
		else if (number == 0 || type.length() == 0)
		{
			std::cout << "	Invalid number or type. Try again.";
			userChoice(number, type);
		}
	}
	return 0;
}
