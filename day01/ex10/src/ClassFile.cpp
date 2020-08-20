#include "../include/ClassFile.hpp" 

void File::readAndPrintOut(void)
{
	std::string line;
	while (getline(_file, line))
	{
		std::cout << line << "\n";
	}
	_file.close();
	return;
}

void File::open(void)
{
	_file.open(_file_name);
	if (!_file.is_open())
	{
		std::cout << "cato9tails: " << _file_name << ": No such file or directory\n";
	}
	return;
}

File::File(std::string file_name)
{
	_file_name = file_name;
	return;
}

File::~File(void)
{
	return;
}
