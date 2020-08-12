#ifndef CLASSINPUT_H
#define CLASSINPUT_H

#include "main.hpp"

class Input
{
	public:

	Input(std::string input_file_name);
	~Input(void);

	bool getLine(std::string &line);

	private:
	
	std::ifstream _input_file;
	ErrorAndExit _error;
};

#endif