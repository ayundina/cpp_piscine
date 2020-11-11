#include "ZombieHorde.hpp"
#include <sstream>

std::string getInput()
{
	std::string input;
	system("clear");
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\tEnter a number: ";
	std::getline(std::cin, input);
	while (1)
	{
		if (input[0] >= '1' && input[0] <= '9')
		{
			return input;
		}
		else
		{
			std::cout << "\tInvalid input. Try again. Enter a number: ";
			std::getline(std::cin, input);
		}
	}
}

int stringToNumber(const std::string &input_string)
{
	int number = 0;
	std::stringstream n(input_string);
	n >> number;
	return number;
}

int getNumber()
{
	std::string input = getInput();
	int number = stringToNumber(input);
	return number;
}

int main()
{
	int number = getNumber();
	ZombieHorde zombie_horde(number);
	return 0;
}
