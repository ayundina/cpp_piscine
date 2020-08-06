#include "../include/main.hpp"

std::string requestInput(void)
{
	std::string input;
	system("clear");
	std::cout << "\n\n\tEnter a number: ";
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

int stringToNumber(std::string input_string)
{
	int number = 0;
	std::stringstream n(input_string);
	n >> number;
	return number;
}

int getNumber(void)
{
	std::string input = requestInput();
	int number = stringToNumber(input);
	return number;
}

int main(void)
{
	int number = getNumber();
	ZombieHorde appocalipse(number);
	return 0;
}
