#include "../include/main.hpp"

std::string ValidParams::getInputFileName(void) const
{
	return _input_file_name;
}

std::string ValidParams::getFindString(void) const
{
	return _find_string;
}

std::string ValidParams::getReplaceString(void) const
{
	return _replace_string;
}

bool ValidParams::validateFile(char *argv1)
{
	_input_file_name = argv1;

	if (_input_file_name.length())
	{
		_valid = true;
	}
	else
	{
		_error.showAndExit(
			"Invalid parameters!\n\t"
			"Try ./replace input_file find_string replace_string");
		_valid = false;
	}
	return _valid;
}

bool ValidParams::validateFindStr(char *argv2)
{
	_find_string = argv2;

	if (_valid == true && _find_string.length())
	{
		_valid = true;
	}
	else
	{
		_error.showAndExit(
			"Invalid parameters!\n\t"
			"Try ./replace input_file find_string replace_string");
		_valid = false;
	}
	return _valid;
}

bool ValidParams::validateReplaceStr(char *argv3)
{
	_replace_string = argv3;

	if (_valid == true && _replace_string.length())
	{
		_valid = true;
	}
	else
	{
		_error.showAndExit(
			"Invalid parameters!\n\t"
			"Try ./replace input_file find_string replace_string");
		_valid = false;
	}
	return _valid;
}

ValidParams::ValidParams(int argc, char **argv)
{
	if (argc == 4)
	{
		validateFile(argv[1]);
		validateFindStr(argv[2]);
		validateReplaceStr(argv[3]);
	}
	else
	{
		_valid = false;
		_error.showAndExit(
			"Invalid parameters!\n\t"
			"Try ./replace input_file find_string replace_string");
	}
	return;
}

ValidParams::~ValidParams(void)
{
	return;
}
