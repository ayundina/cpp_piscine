#ifndef CLASSVALIDPARAMS_H
#define CLASSVALIDPARAMS_H

#include "ClassErrorAndExit.hpp"

class ValidParams
{
private:
	ErrorAndExit _error;
	bool _valid;
	std::string _input_file_name;
	std::string _find_string;
	std::string _replace_string;

	bool validateFile(const char *argv1);
	bool validateFindStr(const char *argv2);
	bool validateReplaceStr(const char *argv3);

public:
	ValidParams(int argc, char **argv);
	~ValidParams();

	std::string getInputFileName() const;
	std::string getFindString() const;
	std::string getReplaceString() const;
};

#endif
