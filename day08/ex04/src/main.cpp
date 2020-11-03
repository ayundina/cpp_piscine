/*

take a mathematical expression as an argument.
() + - / * int
tokenize this expression
convert it to a set of Token derived objects

convert it to postfix (a.k.a Reverse Polish) notation.
evaluate the expression

Example:

./ex04 "3 + ((1 + 4) * 2) - 1"
Tokens: Num(3) Op(+) ParOpen ParOpen Num(1) Op(+) Num(4) ParClose Op(*) Num(2) 
ParClose Op(-) Num(1)
Postfix : Num(3) Num(1) Num(4) Op(+) Num(2) Op(*) Op(+) Num(1) Op(-)
I Num(3)	| OP Push				| ST [3]
I Num(1)	| OP Push				| ST [1 3]
I Num(4)	| OP Push				| ST [4 1 3]
I Op(+)		| OP Add				| ST [5 3]
I Num(2)	| OP Push				| ST [2 5 3]
I Op(*)		| OP Multiply		| ST [10 3]
I Op(+)		| OP Add				| ST [13]
I Num(1)	| OP Push				| ST [1 13]
I Op(-)		| OP Substract	| ST [12]
Result : 12

*/

#include "../include/expression_class.hpp"

void showUsage()
{
	std::cout << "./evaluate '3 + ((1 + 4) * 2) - 1'" << std::endl;
	exit(0);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		showUsage();
	try
	{
		Expression expression(argv[1]);
		expression.printInfix();
		expression.printPostfix();
		expression.evaluate();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
