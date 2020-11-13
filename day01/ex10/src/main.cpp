#include "ClassCat.hpp"

int fileIsGiven(int argc, char **argv)
{
	if (argc >= 2 && argv[1][0] != '-')
	{
		return 1;
	}
	return 0;
}

int noneOrDashIsGiven(int argc, char **argv)
{
	if ((argc >= 2 && argv[1][0] == '-') || argc == 1)
	{
		return 1;
	}
	return 0;
}

int main(int argc, char **argv)
{
	Cat cat;
	if (fileIsGiven(argc, argv))
	{
		cat.file(argc, argv);
	}
	else if (noneOrDashIsGiven(argc, argv))
	{
		cat.standardInput();
	}
	return 0;
}
