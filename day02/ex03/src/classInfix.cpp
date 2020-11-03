#include "../include/classInfix.hpp"

Infix::Infix(const std::string &input)
{
	_infix_str = input;
	_arr_max = input.length();
	_postfix_arr = new std::string[_arr_max];
	_arr_len = 0;
	_stack = "";
	return;
}

Infix::~Infix(void)
{
	delete[] _postfix_arr;
	return;
}

bool Infix::findOperand(int &i)
{
	std::string operand = "";
	if (isDigit(_infix_str[i]))
	{
		while (isDigit(_infix_str[i]))
		{
			operand += _infix_str[i];
			if (isDigit(_infix_str[i + 1]))
				i++;
			else
				break;
		}
		_postfix_arr[_arr_len] = operand;
		_arr_len++;
		return true;
	}
	return false;
}

void Infix::dumpStackToPostfix(int &stack_len, const int &stop_dumping)
{
	stack_len--;
	for (; stack_len >= stop_dumping; stack_len--)
	{
		_postfix_arr[_arr_len] = _stack[stack_len];
		_arr_len++;
		_stack.erase(stack_len, 1);
	}
	return;
}

bool Infix::findOperator(const int &i)
{
	int stack_len = _stack.length();

	if (isOperator(_infix_str[i]))
	{
		if (stack_len != 0 && isGreaterOrEqualPrecedenceOnStack(_stack[stack_len - 1], _infix_str[i]) && _stack[stack_len - 1] != '(')
		{
			size_t left_parenth_in_stack = _stack.find_last_of("(");

			if (left_parenth_in_stack != std::string::npos)
			{
				dumpStackToPostfix(stack_len, (int)left_parenth_in_stack + 1);
			}
			else
			{
				dumpStackToPostfix(stack_len, 0);
			}
		}
		_stack += _infix_str[i];
		return true;
	}
	return false;
}

bool Infix::findLeftParenthesis(const int &i)
{
	if (_infix_str[i] == '(')
	{
		_stack += _infix_str[i];
		return true;
	}
	return false;
}

bool Infix::findRigtParenthesis(const int &i)
{
	if (_infix_str[i] == ')')
	{
		int stack_len = _stack.length();
		size_t left_parenth_in_stack = _stack.find_last_of("(");

		if (left_parenth_in_stack != std::string::npos)
		{
			dumpStackToPostfix(stack_len, (int)left_parenth_in_stack + 1);
			_stack.erase(left_parenth_in_stack, 1);
		}
		else
		{
			std::cout << "Error: no matching parenthesis\n";
			exit(1);
		}
		return true;
	}
	return false;
}

bool Infix::dumpStackAtTheEnd(const int &i)
{
	int stack_len = _stack.length();

	if (stack_len != 0 && _infix_str[i] == '\0')
	{
		dumpStackToPostfix(stack_len, 0);
		return true;
	}
	return false;
}

void Infix::toPostfix(void)
{
	int i;
	// Edsger Dijkstra's Shunting Yard Algorithm
	for (i = 0; i < _arr_max; i++)
	{
		if (findOperand(i))
			;
		else if (findOperator(i))
			;
		else if (findLeftParenthesis(i))
			;
		else if (findRigtParenthesis(i))
			;
	}
	dumpStackAtTheEnd(i);
	// std::cout << "postfix array: "; // debugging lines
	// for (int j = 0; j < _arr_max; j++)
	// {
	// 	std::cout << _postfix_arr[j] << " ";
	// }
	// std::cout << "\n";
	return;
}

std::string *Infix::getPostfix(void) const
{
	return _postfix_arr;
}

const int &Infix::getPostfixLen(void) const
{
	return _arr_len;
}
