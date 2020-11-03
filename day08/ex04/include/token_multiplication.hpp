#ifndef TOKEN_MULTIPLICATION_H
#define TOKEN_MULTIPLICATION_H

#include "a_token_class.hpp"

class Multiplication : public AToken
{
private:
	char _token;

public:
	Multiplication();
	~Multiplication();

	Multiplication(const int &);
	Multiplication(const Multiplication &);
	Multiplication &operator=(const Multiplication &);

	void toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack);
	int precedence();
	bool isOpenBracket();
	void applyOperation();
	void print();
	void printOperation();
};

#endif
