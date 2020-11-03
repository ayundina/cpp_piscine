bool isDigit(const char &c)
{
	if ((c >= '0' && c <= '9') || c == '.' || c == ',')
	{
		return true;
	}
	return false;
}

bool isOperator(const char &c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
	{
		return true;
	}
	return false;
}

bool isGreaterOrEqualPrecedenceOnStack(const char &stack_op, const char &new_op)
{
	int stack_op_precedence = (stack_op == '*' || stack_op == '/') ? 2 : 1;
	int new_op_precedence = (new_op == '*' || new_op == '/') ? 2 : 1;

	if (stack_op_precedence >= new_op_precedence)
	{
		return true;
	}
	return false;
}
