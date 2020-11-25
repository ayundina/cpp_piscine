#include "ClassFile.hpp"

File::File(std::string file_name)
{
	_file_name = file_name;
	return;
}

File::~File()
{
	return;
}

void File::readAndPrintOut()
{
	std::string line;
	while (getline(_file, line))
	{
		std::cout << line << std::endl;
	}
	_file.close();
	return;
}

void File::open()
{
	_file.open(_file_name);
	if (!_file.is_open())
	{
		std::cout << "cato9tails: " << _file_name << ": No such file or directory";
		std::cout << std::endl;
	}
	return;
}
