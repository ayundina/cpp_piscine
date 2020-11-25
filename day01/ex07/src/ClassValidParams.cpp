#include "ClassValidParams.hpp"

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
				"Invalid parameters!\n	"
				"Try ./replace input_file find_string replace_string");
	}
	return;
}

ValidParams::~ValidParams()
{
	return;
}

bool ValidParams::validateFile(const char *argv1)
{
	_input_file_name = argv1;

	if (_input_file_name.length())
	{
		_valid = true;
	}
	else
	{
		_error.showAndExit(
				"Invalid parameters!\n	"
				"Try ./replace input_file find_string replace_string");
		_valid = false;
	}
	return _valid;
}

bool ValidParams::validateFindStr(const char *argv2)
{
	_find_string = argv2;

	if (_valid == true && _find_string.length())
	{
		_valid = true;
	}
	else
	{
		_error.showAndExit(
				"Invalid parameters!\n	"
				"Try ./replace input_file find_string replace_string");
		_valid = false;
	}
	return _valid;
}

bool ValidParams::validateReplaceStr(const char *argv3)
{
	_replace_string = argv3;

	if (_valid == true && _replace_string.length())
	{
		_valid = true;
	}
	else
	{
		_error.showAndExit(
				"Invalid parameters!\n	"
				"Try ./replace input_file find_string replace_string");
		_valid = false;
	}
	return _valid;
}

std::string ValidParams::getInputFileName() const
{
	return _input_file_name;
}

std::string ValidParams::getFindString() const
{
	return _find_string;
}

std::string ValidParams::getReplaceString() const
{
	return _replace_string;
}
