/*

Make a cato9tails program 
same as the system’s cat command without options. It can take read from files and/or the standard input. Be thorough in
your testing, this is not as simple as it seems.

*/

#include "../include/ClassCat.hpp"
#include <iostream>

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
