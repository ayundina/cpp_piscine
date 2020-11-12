#include "ClassInput.hpp"

Input::Input(const std::string &input_file_name)
{
	_input_file.open(input_file_name);
	if (!_input_file.is_open())
	{
		_error.showAndExit("Unable to open " + input_file_name + " file");
	}
}

Input::~Input()
{
	_input_file.close();
	return;
}

bool Input::getLine(std::string &line)
{
	bool ret = false;
	ret = static_cast<bool>(getline(_input_file, line));
	return ret;
}
