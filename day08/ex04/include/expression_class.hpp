#ifndef EXPRESSION_CLASS_H
#define EXPRESSION_CLASS_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cctype>

#include "a_token_class.hpp"
#include "token_addition.hpp"
#include "token_number.hpp"
#include "token_substruction.hpp"
#include "token_multiplication.hpp"
#include "token_division.hpp"
#include "token_open_bracket.hpp"
#include "token_close_bracket.hpp"

#define OPERATORS "+-*/()"
#define ADDITION '+'
#define SUBSTRUCTION '-'
#define MULTIPLICATION '*'
#define DIVISION '/'
#define OPEN_BR '('
#define CLOSE_BR ')'

class Expression
{
private:
	int _size;
	std::string _expression;
	std::vector<AToken *> _infix;
	std::vector<AToken *> _postfix;
	std::vector<AToken *> _stack;

	typedef AToken *(Expression::*addTokenFP)();
	std::map<char, addTokenFP> _fptr;

	Expression();

	void isNumber(int &);
	void isOperator(int &);
	void infixToPostfix();

public:
	~Expression();

	Expression(const char *);
	Expression(const Expression &);
	Expression &operator=(const Expression &);

	template <class T>
	AToken *addToken();

	void printInfix();
	void printPostfix();
	void evaluate();

	class MismatchedBracketException : public std::exception
	{
	private:
		const char *what() const throw();
	};
};

#endif
