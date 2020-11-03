#include "../include/a_token_class.hpp"

std::vector<int> AToken::_st(0);

AToken::AToken()
{
	return;
}

AToken::~AToken()
{
	return;
}

AToken::AToken(const int &)
{
	return;
}

AToken::AToken(const AToken &)
{
	return;
}

AToken &AToken::operator=(const AToken &)
{
	return *this;
}

void AToken::printResult()
{
	std::cout << "Result : " << _st[0] << std::endl;
	return;
}

void AToken::pushFromStackToPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack)
{
	postfix.push_back(stack.back());
	stack.pop_back();
	return;
}

void AToken::operationToPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack)
{
	while (!stack.empty() && stack.back()->precedence() >= this->precedence() && !stack.back()->isOpenBracket())
	{
		pushFromStackToPostfix(postfix, stack);
	}
	stack.push_back(this);
	return;
}

const char *AToken::MismatchedBracketException::what() const throw()
{
	return "Error: mismatched bracket";
}
