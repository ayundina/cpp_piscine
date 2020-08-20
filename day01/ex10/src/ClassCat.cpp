#include "../include/ClassCat.hpp"

void Cat::standardInput(void)
{
	std::string line;
	while(getline(std::cin, line))
	{
		std::cout << line << "\n";
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

Cat::Cat(void)
{
	return;
}

Cat::~Cat(void)
{
	return;
}
