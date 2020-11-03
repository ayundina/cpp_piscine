#ifndef TOKEN_ADDITION_H
#define TOKEN_ADDITION_H

#include "a_token_class.hpp"

class Addition : public AToken
{
private:
	char _token;

public:
	Addition();
	~Addition();

	Addition(const int &);
	Addition(const Addition &);
	Addition &operator=(const Addition &);

	void toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack);
	int precedence();
	bool isOpenBracket();
	void applyOperation();
	void print();
	void printOperation();
};

#endif
