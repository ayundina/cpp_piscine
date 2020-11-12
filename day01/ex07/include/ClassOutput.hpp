#ifndef CLASSOUTPUT_H
#define CLASSOUTPUT_H

#include "ClassErrorAndExit.hpp"
#include <fstream>

class Output
{
private:
	std::string _output_file_name;
	std::fstream _output_file;
	ErrorAndExit _error;

	void composeFileName(const std::string &input_file_name, int extend);
	bool alreadyExists(std::string file);
	std::string uniqueName(std::string input_file_name, int extend);

public:
	Output(const std::string &file_name);
	~Output();

	void write(std::string string);
};

#endif
