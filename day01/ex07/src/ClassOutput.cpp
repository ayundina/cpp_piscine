#include "ClassOutput.hpp"

Output::Output(const std::string &input_file_name)
{
	composeFileName(input_file_name, 0);
	std::ofstream _output_file(_output_file_name);
}

Output::~Output(void)
{
	return;
}

void Output::write(std::string string)
{
	_output_file.open(_output_file_name, std::ios_base::app);
	if (_output_file.is_open())
	{
		_output_file << string;
		_output_file.close();
	}
	else
	{
		_error.showAndExit("Unable to open " + _output_file_name);
	}
	return;
}

bool Output::alreadyExists(std::string file)
{
	std::ifstream check;

	check.open(file);
	if (check.is_open())
	{
		check.close();
		return true;
	}
	return false;
}

std::string Output::uniqueName(std::string input_file_name, int extend)
{
	if (extend > 0)
	{
		return input_file_name + std::to_string(extend);
	}
	else
	{
		return input_file_name;
	}
}

void Output::composeFileName(const std::string &input_file_name, int extend)
{
	std::string tmp_name = uniqueName(input_file_name, extend);

	if (alreadyExists(tmp_name + ".replace"))
	{
		extend++;
		composeFileName(input_file_name, extend);
		return;
	}
	else
	{
		_output_file_name = tmp_name + ".replace";
		system("clear");
		std::cout << std::endl
							<< std::endl;
		std::cout << "\t" << _output_file_name << " file is composed";
		std::cout << std::endl
							<< std::endl;
		return;
	}
}
