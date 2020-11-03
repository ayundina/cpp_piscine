#include "../include/token_number.hpp"

Number::Number()
{
	_token = 0;
	return;
}

Number::~Number()
{
	return;
}

Number::Number(const int &num)
{
	_token = num;
	return;
}

Number::Number(const Number &n)
{
	_token = n._token;
	return;
}

Number &Number::operator=(const Number &n)
{
	_token = n._token;
	return *this;
}

void Number::toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &)
{
	postfix.push_back(this);
	return;
}

int Number::precedence()
{
	return 0;
}

bool Number::isOpenBracket()
{
	return false;
}

void Number::applyOperation()
{
	_st.push_back(_token);

	print();
	printOperation();
	return;
}

void Number::printOperation()
{
	std::cout << "	|	OP Push		|	STACK [ ";
	int size = _st.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << _st[i] << " ";
	}
	std::cout << "]\n";
	return;
}

void Number::print()
{
	std::cout << "Num(" << _token << ") ";
	return;
}
