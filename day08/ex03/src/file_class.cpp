#include "../include/file_class.hpp"

File::File() {}

File::~File()
{
	_file.close(); // not sure if needed
	return;
}

File::File(const char *file_name)
{
	if (file_name == nullptr)
		throw BadFileNameException();
	_file_name.assign(file_name);
	_file.open(file_name);
	if (!_file.is_open())
		throw UnableToOpenFileException();
	return;
}

File::File(const File &f)
{
	*this = f;
	return;
}

File &File::operator=(const File &f)
{
	_file_name = f._file_name;
	_file.open(_file_name);
	if (!_file.is_open())
		throw UnableToOpenFileException();
	return *this;
}

std::istream &File::readChar(char &c)
{
	return _file.get(c);
}

const char *File::UnableToOpenFileException::what() const throw()
{
	return "Error: unable to open the file.";
}

const char *File::BadFileNameException::what() const throw()
{
	return "Error: file name is nullptr.";
}
