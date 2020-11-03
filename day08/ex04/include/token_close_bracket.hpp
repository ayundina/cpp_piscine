#ifndef TOKEN_CLOSE_BRACKET_H
#define TOKEN_CLOSE_BRACKET_H

#include "a_token_class.hpp"

class CloseBr : public AToken
{
private:
	char _token;

public:
	CloseBr();
	~CloseBr();

	CloseBr(const int &);
	CloseBr(const CloseBr &);
	CloseBr &operator=(const CloseBr &);

	void toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack);
	int precedence();
	bool isOpenBracket();
	void applyOperation();
	void print();
};

#endif
