#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

class Logger
{
private:
	std::ofstream log_file;
	std::string log_file_name;

	void logToConsole(const std::string &message);
	void logToFile(const std::string &message);
	std::string makeLogEntry(const std::string &message) const;

public:
	Logger();
	~Logger();

	void log(const std::string &dest, const std::string &message);
};

#endif