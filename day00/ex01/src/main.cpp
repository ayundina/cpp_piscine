#include "ClassPhonebook.hpp"

std::string showMenu(void)
{
	std::string selection;

	system("clear");
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "	Welcome to your Awesome Phonebook!";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "	1. ADD";
	std::cout << std::endl;
	std::cout << "	2. SEARCH";
	std::cout << std::endl;
	std::cout << "	3. EXIT";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "	You selected ";
	std::getline(std::cin, selection);
	std::cout << std::endl;
	std::cout << "	--------------------------------------------";
	std::cout << std::endl;
	return selection;
}

bool add(std::string &menu_selection, Phonebook &phonebook, int &index)
{
	if (menu_selection.compare("1") == 0 ||
			menu_selection.compare("ADD") == 0)
	{
		phonebook.addNewContact(index);
		menu_selection = showMenu();
		return true;
	}
	return false;
}

bool search(std::string &menu_selection, Phonebook &phonebook, int &index)
{
	if (menu_selection.compare("2") == 0 ||
			menu_selection.compare("SEARCH") == 0)
	{
		phonebook.searchContact(index);
		menu_selection = showMenu();
		return true;
	}
	return false;
}

bool exit(const std::string &menu_selection)
{
	if (menu_selection.compare("3") == 0 ||
			menu_selection.compare("EXIT") == 0)
	{
		std::cout << "	See you again soon!\n\n";
		return true;
	}
	return false;
}

int main()
{
	std::string menu_selection = showMenu();
	int index = 0;
	Phonebook phonebook;

	try
	{
		while (1)
		{
			if (add(menu_selection, phonebook, index))
				;
			else if (search(menu_selection, phonebook, index))
				;
			else if (exit(menu_selection))
				break;
			else
			{
				std::cout << "	Your selection is invalid. Try again.";
				std::cout << std::endl;
				menu_selection = showMenu();
			}
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << "	Error: " << e.what() << std::endl;
	}

	return 0;
}
