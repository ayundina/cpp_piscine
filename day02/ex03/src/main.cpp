/*
$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
$>
*/

#include "../include/main.hpp"

bool validInput(int argc)
{
	if (argc == 2)
		return true;
	return false;
}

int main(int argc, char **argv)
{
	if (validInput(argc))
	{
		Infix infix(argv[1]);
		infix.toPostfix();
		Tree tree(infix.getPostfix(), infix.getPostfixLen() - 1);
		std::cout << tree.evaluateTree(tree.getRoot()) << "\n";
	}
	else
	{
		std::cout << "Invalid arguments. Try '( 18.18 + 3.03 ) * 2'\n";
	}

	return 0;
}
