#ifndef EVALUATE_CHAR_H
#define EVALUATE_CHAR_H

bool isDigit(const char &c);
bool isOperator(const char &c);
bool isGreaterOrEqualPrecedenceOnStack(const char &stack_op, const char &new_op);

#endif
