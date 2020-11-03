#include "../include/expression_class.hpp"

Expression::Expression()
{
	return;
}

Expression::~Expression()
{
	int size = _infix.size();

	for (int i = 0; i < size; i++)
	{
		delete _infix[i];
	}
	return;
}

void Expression::isNumber(int &i)
{
	if (std::isdigit(_expression[i]))
	{
		int num = 0;
		for (; std::isdigit(_expression[i]); i++)
		{
			num = num * 10 + (_expression[i] - '0');
		}
		AToken *token = new Number(num);
		_infix.push_back(token);
	}
	return;
}

void Expression::isOperator(int &i)
{
	std::string operators = OPERATORS;
	if (operators.find(_expression[i]) != std::string::npos)
	{
		_infix.push_back((this->*(_fptr[_expression[i]]))());
	}
	return;
}

/*

Shunting yard algorithm

while there are tokens to be read:
    read a token.
    if the token is a number, then:
        push it to the output queue.
    else if the token is a function then:
        push it onto the operator stack 
    else if the token is an operator then:
        while ((there is an operator at the top of the operator stack)
              and ((the operator at the top of the operator stack has greater precedence)
                  or (the operator at the top of the operator stack has equal precedence and the token is left associative))
              and (the operator at the top of the operator stack is not a left parenthesis)):
            pop operators from the operator stack onto the output queue.
        push it onto the operator stack.
    else if the token is a left parenthesis (i.e. "("), then:
        push it onto the operator stack.
    else if the token is a right parenthesis (i.e. ")"), then:
        while the operator at the top of the operator stack is not a left parenthesis:
            pop the operator from the operator stack onto the output queue.
        // If the stack runs out without finding a left parenthesis, then there are mismatched parentheses.
        if there is a left parenthesis at the top of the operator stack, then:
            pop the operator from the operator stack and discard it
// After while loop, if operator stack not null, pop everything to output queue
if there are no more tokens to read then:
    while there are still operator tokens on the stack:
        // If the operator token on the top of the stack is a parenthesis, then there are mismatched parentheses.
        pop the operator from the operator stack onto the output queue.
exit.

*/

void Expression::infixToPostfix()
{
	_size = _infix.size();
	for (int i = 0; i < _size; i++)
	{
		_infix[i]->toPostfix(_postfix, _stack);
	}
	while (!_stack.empty())
	{
		if (_stack.back()->isOpenBracket())
			throw MismatchedBracketException();
		_postfix.push_back(_stack.back());
		_stack.pop_back();
	}
	return;
}

Expression::Expression(const char *e)
{
	_expression = e;
	_size = _expression.size();

	_fptr[ADDITION] = &Expression::addToken<Addition>;
	_fptr[SUBSTRUCTION] = &Expression::addToken<Substruction>;
	_fptr[MULTIPLICATION] = &Expression::addToken<Multiplication>;
	_fptr[DIVISION] = &Expression::addToken<Division>;
	_fptr[OPEN_BR] = &Expression::addToken<OpenBr>;
	_fptr[CLOSE_BR] = &Expression::addToken<CloseBr>;

	for (int i = 0; i < _size; i++)
	{
		isNumber(i);
		isOperator(i);
	}
	infixToPostfix();
	return;
}

Expression::Expression(const Expression &)
{
	return;
}

Expression &Expression::operator=(const Expression &)
{
	return *this;
}

template <class T>
AToken *Expression::addToken()
{
	AToken *token = new T();
	return token;
}

void Expression::printInfix()
{
	_size = _infix.size();

	std::cout << "Tokens : ";
	for (int i = 0; i < _size; i++)
	{
		_infix[i]->print();
	}
	std::cout << "\n";
	return;
}

void Expression::printPostfix()
{
	_size = _postfix.size();

	std::cout << "Postfix : ";
	for (int i = 0; i < _size; i++)
	{
		_postfix[i]->print();
	}
	std::cout << "\n";
	return;
}

void Expression::evaluate()
{
	_size = _postfix.size();

	std::cout << "Evaluation :\n";
	for (int i = 0; i < _size; i++)
	{
		_postfix[i]->applyOperation();
	}
	_postfix[0]->printResult();
	return;
}

const char *Expression::MismatchedBracketException::what() const throw()
{
	return "Error: mismatched bracket";
}
