#ifndef FILE_CLASS_H
#define FILE_CLASS_H

#include <iostream>
#include <fstream>
#include <exception>

class File
{
private:
	std::ifstream _file;
	std::string _file_name;

	File();

public:
	~File();

	File(const char *);
	File(const File &);

	File &operator=(const File &);

	std::istream &readChar(char &);

	class UnableToOpenFileException : public std::exception
	{
		const char *what() const throw();
	};

	class BadFileNameException : public std::exception
	{
		const char *what() const throw();
	};
};

#endif