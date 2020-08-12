#ifndef CLASSVALIDPARAMS_H
#define CLASSVALIDPARAMS_H

#include "main.hpp"

class ValidParams
{
	public:

	ValidParams(int argc, char **argv);
	~ValidParams(void);

	bool validateFile(char *argv1);
	bool validateFindStr(char *argv2);
	bool validateReplaceStr(char *argv3);
	std::string getInputFileName(void) const;
	std::string getFindString(void) const;
	std::string getReplaceString(void) const;

	
	private:

	ErrorAndExit _error;
	bool _valid;
	std::string _input_file_name;
	std::string _find_string;
	std::string _replace_string;
};

#endif