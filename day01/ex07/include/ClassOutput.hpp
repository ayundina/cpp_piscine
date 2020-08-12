#ifndef CLASSOUTPUT_H
#define CLASSOUTPUT_H

#include "main.hpp"

class Output
{
	public:

	Output(std::string file_name);
	~Output(void);

	void composeFileName(std::string input_file_name, int extend);
	bool alreadyExists(std::string file);
	std::string uniqueName(std::string input_file_name, int extend);
	void write(std::string string);

	private:

	std::string _output_file_name;
	std::fstream _output_file;
	ErrorAndExit _error;

};

#endif