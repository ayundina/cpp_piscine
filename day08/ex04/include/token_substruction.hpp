#ifndef TOKEN_SUBSTRUCTION_H
#define TOKEN_SUBSTRUCTION_H

#include "a_token_class.hpp"

class Substruction : public AToken
{
private:
	char _token;

public:
	Substruction();
	~Substruction();

	Substruction(const int &);
	Substruction(const Substruction &);
	Substruction &operator=(const Substruction &);

	void toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack);
	int precedence();
	bool isOpenBracket();
	void applyOperation();
	void print();
	void printOperation();
};

#endif
