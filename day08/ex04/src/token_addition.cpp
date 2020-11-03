#include "../include/token_addition.hpp"

Addition::Addition()
{
	_token = '+';
	return;
}

Addition::~Addition()
{
	return;
}

Addition::Addition(const int &)
{
	_token = '+';
	return;
}

Addition::Addition(const Addition &)
{
	_token = '+';
	return;
}

Addition &Addition::operator=(const Addition &)
{
	_token = '+';
	return *this;
}

void Addition::toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack)
{
	operationToPostfix(postfix, stack);
	return;
}

int Addition::precedence()
{
	return 1;
}

bool Addition::isOpenBracket()
{
	return false;
}

void Addition::applyOperation()
{
	int num_two = _st.back();
	_st.pop_back();
	int num_one = _st.back();
	_st.pop_back();
	_st.push_back(num_one + num_two);

	print();
	printOperation();
	return;
}

void Addition::printOperation()
{
	std::cout << "	|	OP Add		|	STACK [ ";
	int size = _st.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << _st[i] << " ";
	}
	std::cout << "]\n";
	return;
}

void Addition::print()
{
	std::cout << "Op(+) ";
	return;
}
