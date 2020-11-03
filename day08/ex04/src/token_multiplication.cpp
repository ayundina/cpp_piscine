#include "../include/token_multiplication.hpp"

Multiplication::Multiplication()
{
	_token = '*';
	return;
}

Multiplication::~Multiplication()
{
	return;
}

Multiplication::Multiplication(const int &)
{
	_token = '*';
	return;
}

Multiplication::Multiplication(const Multiplication &)
{
	_token = '*';
	return;
}

Multiplication &Multiplication::operator=(const Multiplication &)
{
	_token = '*';
	return *this;
}

void Multiplication::toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack)
{
	operationToPostfix(postfix, stack);
	return;
}

int Multiplication::precedence()
{
	return 2;
}

bool Multiplication::isOpenBracket()
{
	return false;
}

void Multiplication::applyOperation()
{
	int num_two = _st.back();
	_st.pop_back();
	int num_one = _st.back();
	_st.pop_back();
	_st.push_back(num_one * num_two);

	print();
	printOperation();
	return;
}

void Multiplication::printOperation()
{
	std::cout << "	|	OP Multiply	|	STACK [ ";
	int size = _st.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << _st[i] << " ";
	}
	std::cout << "]\n";
	return;
}

void Multiplication::print()
{
	std::cout << "Op(*) ";
	return;
}
