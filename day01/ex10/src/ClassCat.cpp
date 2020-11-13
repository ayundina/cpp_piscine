#include "ClassCat.hpp"

Cat::Cat()
{
	return;
}

Cat::~Cat()
{
	return;
}

void Cat::standardInput()
{
	std::string line;
	while (getline(std::cin, line))
	{
		std::cout << line << std::endl;
	}
	return;
}

void Cat::file(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		File file(argv[i]);
		file.open();
		file.readAndPrintOut();
	}
	return;
}
