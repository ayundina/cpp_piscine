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

bool isGreaterPrecedenceOnStack(const char &stack_op, const char &new_op)
{
	if ((stack_op == '*' || stack_op == '/') && (new_op == '+' || new_op == '-'))
	{
		return true;
	}
	return false;
}
