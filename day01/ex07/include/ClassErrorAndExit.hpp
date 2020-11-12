#ifndef CLASSERRORANDEXIT_H
#define CLASSERRORANDEXIT_H

#include <iostream>
#include <string>

class ErrorAndExit
{
private:
public:
	ErrorAndExit();
	~ErrorAndExit();

	void showAndExit(const std::string &str);
};

#endif
