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

public:
	Infix(const std::string &input);
	~Infix(void);

	void toPostfix(void);
	std::string *getPostfix(void) const;
	const int &getPostfixLen(void) const;

	void findOperand(int &i);
	void findOperator(const int &i);
	void findLeftParenthesis(const int &i);
	void findRigtParenthesis(const int &i);
	void dumpStackToPostfix(int &stack_len, const int &stop_dumping);
	void dumpStackAtTheEnd(const int &i);
	// void clearLeftoverPostfixArr(int i);
};

#endif