#include "Logger.hpp"

Logger::Logger()
{
	return;
}

Logger::~Logger()
{
	return;
}

void Logger::logToConsole(const std::string &message)
{
	std::cout << "	" << message << std::endl;
	return;
}

void Logger::logToFile(const std::string &message)
{
	log_file_name = "logger.txt";
	log_file.open(log_file_name, std::ios::app);
	if (log_file.is_open())
	{
		log_file << message << std::endl;
		std::cout << "	Success: log message is written to " << log_file_name << std::endl;
		log_file.close();
	}
	else
	{
		std::cout << "	Error: " << log_file_name << "did not open" << std::endl;
	}
	return;
}

std::string makeTimeStamp()
{
	std::time_t current_time = std::time(nullptr);
	std::tm *time_ptr = std::localtime(&current_time);
	char timestamp[50];

	std::strftime(timestamp, sizeof(timestamp), "[ %Y-%m-%d %H:%M:%S ] ", time_ptr);
	return timestamp;
}

std::string Logger::makeLogEntry(const std::string &message) const
{
	std::string timestamp = makeTimeStamp();
	std::string log_entry = timestamp + message;
	return log_entry;
}

void Logger::log(std::string const &dest, std::string const &message)
{
	typedef void (Logger::*FuncPtr)(const std::string &log_entry);

	std::string dest_arr[2] = {"console", "file"};
	FuncPtr function[2] = {&Logger::logToConsole, &Logger::logToFile};
	std::string log_entry = makeLogEntry(message);

	for (int i = 0; i < 2; i++)
	{
		if (dest == dest_arr[i])
		{
			(this->*function[i])(log_entry);
			return;
		}
	}
	std::cout << "	\"" << dest << "\" destination is not supported" << std::endl;
	return;
}
