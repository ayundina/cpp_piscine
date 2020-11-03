#ifndef TOKEN_DIVISION_H
#define TOKEN_DIVISION_H

#include "a_token_class.hpp"

class Division : public AToken
{
private:
	char _token;

public:
	Division();
	~Division();

	Division(const int &);
	Division(const Division &);
	Division &operator=(const Division &);

	void toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack);
	int precedence();
	bool isOpenBracket();
	void applyOperation();
	void print();
	void printOperation();
};

#endif
