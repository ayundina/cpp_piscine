#include "../include/Convert.hpp"

void showUsage()
{
	std::cout << "Usage:	./convert 'string to convert'\n";
	return;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		showUsage();
		return 0;
	}
	Convert convert(argv[1]);
	convert.print();
	return 0;
}
