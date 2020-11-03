#ifndef A_TOKEN_CLASS_H
#define A_TOKEN_CLASS_H

#include <iostream>
#include <vector>
#include <exception>

class AToken
{
protected:
	static std::vector<int> _st;

	void pushFromStackToPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack);
	void operationToPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack);

public:
	AToken();
	virtual ~AToken();

	AToken(const int &);
	AToken(const AToken &);
	AToken &operator=(const AToken &);

	void printResult();

	virtual void toPostfix(std::vector<AToken *> &postfix, std::vector<AToken *> &stack) = 0;
	virtual int precedence() = 0; // 1 if +- and 2 if */
	virtual bool isOpenBracket() = 0;
	virtual void applyOperation() = 0;
	virtual void print() = 0;

	class MismatchedBracketException : public std::exception
	{
	private:
		const char *what() const throw();
	};
};

#endif
