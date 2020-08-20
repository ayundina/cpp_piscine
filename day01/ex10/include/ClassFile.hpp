#ifndef CLASSFILE_H
#define CLASSFILE_H

#include <iostream>
#include <fstream>

class File
{
	private:

	std::fstream _file;
	std::string _file_name;

	public:

	File(std::string file_name);
	~File();

	void readAndPrintOut(void);
	void open(void);

};

#endif