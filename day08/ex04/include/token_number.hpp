#ifndef TOKEN_NUMBER_H
#define TOKEN_NUMBER_H

#include "a_token_class.hpp"

class Number : public AToken
{
private:
	int _token;

public:
	Number();
	~Number();

	Number(const int &);
	Number(const Number &);
	Number &operator=(const Number &);

	void toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack);
	int precedence();
	bool isOpenBracket();
	void applyOperation();
	void print();
	void printOperation();
};

#endif
