#include "../include/token_close_bracket.hpp"

CloseBr::CloseBr()
{
	_token = ')';
	return;
}

CloseBr::~CloseBr()
{
	return;
}

CloseBr::CloseBr(const int &)
{
	_token = ')';
	return;
}

CloseBr::CloseBr(const CloseBr &)
{
	_token = ')';
	return;
}

CloseBr &CloseBr::operator=(const CloseBr &)
{
	_token = ')';
	return *this;
}

void CloseBr::toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack)
{
	while (!stack.empty() && !stack.back()->isOpenBracket())
	{
		pushFromStackToPostfix(postfix, stack);
	}
	if (stack.empty())
		throw MismatchedBracketException();
	stack.pop_back();
	return;
}

int CloseBr::precedence()
{
	return 0;
}

bool CloseBr::isOpenBracket()
{
	return false;
}

void CloseBr::applyOperation()
{
	return;
}

void CloseBr::print()
{
	std::cout << "ParClose ";
	return;
}
