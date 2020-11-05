#include "main.hpp"

void showMessage(int message)
{
	if (message == 1)
	{
		std::cout << "\n\n\tEnter the NUMBER of zombies: ";
	}
	else if (message == 2)
	{
		std::cout << "\tEnter the TYPE of zombies: ";
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

void readType(std::string type)
{
	std::getline(std::cin, type);
	return;
}

void userChoise(int &number, std::string &type)
{
	system("clear");
	showMessage(1);
	readNumber(number);
	showMessage(2);
	readType(type);
	return;
}
