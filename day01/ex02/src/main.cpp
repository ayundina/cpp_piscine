#include "../include/main.hpp"

int main()
{
	int number = 2;
	std::string type = "Generic";

	userChoise(&number, &type);
	while (1)
	{
		if (number > 0 && type.length() > 0)
		{
			startZombieWave(number, type);
			break;
		}
		else if (number == 0 || type.length() == 0)
		{
			std::cout << "\tInvalid number or type. Try again.";
			userChoise(&number, &type);
		}
	}
	return 0;
}
