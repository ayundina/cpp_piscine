#include "../include/token_division.hpp"

Division::Division()
{
	_token = '/';
	return;
}

Division::~Division()
{
	return;
}

Division::Division(const int &)
{
	_token = '/';
	return;
}

Division::Division(const Division &)
{
	_token = '/';
	return;
}

Division &Division::operator=(const Division &)
{
	_token = '/';
	return *this;
}

void Division::toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack)
{
	operationToPostfix(postfix, stack);
	return;
}

int Division::precedence()
{
	return 2;
}

bool Division::isOpenBracket()
{
	return false;
}

void Division::applyOperation()
{
	int num_two = _st.back();
	_st.pop_back();
	int num_one = _st.back();
	_st.pop_back();
	_st.push_back(num_one / num_two);

	print();
	printOperation();
	return;
}

void Division::printOperation()
{
	std::cout << "	|	OP Divide	|	STACK [ ";
	int size = _st.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << _st[i] << " ";
	}
	std::cout << "]\n";
	return;
}

void Division::print()
{
	std::cout << "Op(/) ";
	return;
}
