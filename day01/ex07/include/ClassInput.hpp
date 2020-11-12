#ifndef CLASSINPUT_H
#define CLASSINPUT_H

#include "ClassErrorAndExit.hpp"
#include <fstream>

class Input
{
private:
	std::ifstream _input_file;
	ErrorAndExit _error;

public:
	Input(const std::string &input_file_name);
	~Input();

	bool getLine(std::string &line);
};

#endif
