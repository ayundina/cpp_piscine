#ifndef CLASSERRORANDEXIT_H
#define CLASSERRORANDEXIT_H

#include "main.hpp"

class ErrorAndExit
{
	public:

	ErrorAndExit(void);
	~ErrorAndExit(void);

	void showAndExit(std::string str);

	private:
};

#endif