
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
		Tree tree(infix.getPostfix(), infix.getPostfixLen());
		std::cout << tree.evaluateTree(tree.getRoot()) << "\n";
	}
	else
	{
		std::cout << "Invalid arguments. Try '( 18.18 + 3.03 ) * 2'\n";
	}
	return 0;
}
