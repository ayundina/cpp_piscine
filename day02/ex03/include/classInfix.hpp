#ifndef INFIX_H
#define INFIX_H

#include <iostream>
#include "../include/evaluate_char.hpp"

class Infix
{
private:
	std::string _infix_str;
	int _arr_max;
	int _arr_len;
	std::string *_postfix_arr;
	std::string _stack;

	bool findOperand(int &i);
	bool findOperator(const int &i);
	bool findLeftParenthesis(const int &i);
	bool findRigtParenthesis(const int &i);
	bool dumpStackAtTheEnd(const int &i);
	void dumpStackToPostfix(int &stack_len, const int &stop_dumping);

public:
	Infix(const std::string &input);
	~Infix(void);

	void toPostfix(void);
	std::string *getPostfix(void) const;
	const int &getPostfixLen(void) const;
};

#endif