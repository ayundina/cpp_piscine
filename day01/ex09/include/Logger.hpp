#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>
#include <fstream>
#include <map>

class Logger
{
private:

	std::ofstream log_file;
	std::string log_file_name;

	void logToConsole(std::string const &message);
	void logToFile(std::string const &message);
	std::string makeLogEntry(std::string const &message) const;

public:

	Logger(void);
	~Logger(void);

	void log(std::string const &dest, std::string const &message);

};

#endif