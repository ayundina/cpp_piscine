#include "../include/token_substruction.hpp"

Substruction::Substruction()
{
	_token = '-';
	return;
}

Substruction::~Substruction()
{
	return;
}

Substruction::Substruction(const int &)
{
	_token = '-';
	return;
}

Substruction::Substruction(const Substruction &)
{
	_token = '-';
	return;
}

Substruction &Substruction::operator=(const Substruction &)
{
	_token = '-';
	return *this;
}

void Substruction::toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack)
{
	operationToPostfix(postfix, stack);
	return;
}

int Substruction::precedence()
{
	return 1;
}

bool Substruction::isOpenBracket()
{
	return false;
}

void Substruction::applyOperation()
{
	int num_two = _st.back();
	_st.pop_back();
	int num_one = _st.back();
	_st.pop_back();
	_st.push_back(num_one - num_two);

	print();
	printOperation();
	return;
}

void Substruction::printOperation()
{
	std::cout << "	|	OP Substruct	|	STACK [ ";
	int size = _st.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << _st[i] << " ";
	}
	std::cout << "]\n";
	return;
}

void Substruction::print()
{
	std::cout << "Op(-) ";
	return;
}
