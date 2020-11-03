#ifndef TOKEN_OPEN_BRACKET_H
#define TOKEN_OPEN_BRACKET_H

#include "a_token_class.hpp"

class OpenBr : public AToken
{
private:
	char _token;

public:
	OpenBr();
	~OpenBr();

	OpenBr(const int &);
	OpenBr(const OpenBr &);
	OpenBr &operator=(const OpenBr &);

	void toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack);
	int precedence();
	bool isOpenBracket();
	void applyOperation();
	void print();
};

#endif
