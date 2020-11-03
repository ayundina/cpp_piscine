#include "../include/token_open_bracket.hpp"

OpenBr::OpenBr()
{
	_token = '(';
	return;
}

OpenBr::~OpenBr()
{
	return;
}

OpenBr::OpenBr(const int &)
{
	_token = '(';
	return;
}

OpenBr::OpenBr(const OpenBr &)
{
	_token = '(';
	return;
}

OpenBr &OpenBr::operator=(const OpenBr &)
{
	_token = '(';
	return *this;
}

void OpenBr::toPostfix(std::vector<AToken *> &, std::vector<AToken *> &stack)
{
	stack.push_back(this);
	return;
}

int OpenBr::precedence()
{
	return 0;
}

bool OpenBr::isOpenBracket()
{
	return true;
}

void OpenBr::applyOperation()
{
	return;
}

void OpenBr::print()
{
	std::cout << "ParOpen ";
	return;
}
