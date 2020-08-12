#include "../include/main.hpp"

bool Input::getLine(std::string &line)
{
	bool ret = false;
	ret = bool(getline(_input_file, line));
	return ret;
}

Input::Input (std::string input_file_name)
{
	_input_file.open(input_file_name);
	if (!_input_file.is_open())
	{
		_error.showAndExit("Unable to open " + input_file_name + " file");
	}
}

Input::~Input(void)
{
	_input_file.close();
	return;
}
