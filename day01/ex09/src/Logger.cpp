#include "../include/Logger.hpp"

void Logger::logToConsole(std::string const &message)
{
	std::cout << "\t" << message << "\n";
	return;
}

void Logger::logToFile(std::string const &message)
{
	log_file_name = "logger.txt";
	log_file.open(log_file_name, std::ios::app);
	if (log_file.is_open())
	{
		log_file << message << "\n";
		std::cout << "\tSuccess: log is written to " << log_file_name << "\n";
		log_file.close();
	}
	else
	{
		std::cout << "\tError: " << log_file_name << "did not open\n";
	}
	return;
}

std::string makeTimeStamp(void)
{
	time_t time_in_sec_since_1970;
  tm *tm_time;
  char timestamp[22];

  time(&time_in_sec_since_1970);
  tm_time = localtime(&time_in_sec_since_1970);
  strftime(timestamp, sizeof(timestamp), "[%Y-%m-%d_%H:%M:%S] ", tm_time);
	return timestamp;
}

std::string Logger::makeLogEntry(std::string const &message) const
{
	std::string timestamp = makeTimeStamp();
	std::string log_entry = timestamp + message;
	return log_entry;
}

void Logger::log(std::string const &dest, std::string const &message)
{
	std::string log_entry = makeLogEntry(message);
	typedef void (Logger::*PointerMemberFunction)(std::string const &log_entry);
	std::map<std::string, PointerMemberFunction> log_to;

	log_to.insert(std::make_pair("console", &Logger::logToConsole));
	log_to.insert(std::make_pair("file", &Logger::logToFile));

	PointerMemberFunction func_pointer = log_to[dest];
	(this->*func_pointer)(log_entry);
	return;
}

Logger::Logger(void)
{
	return;
}

Logger::~Logger(void)
{
	return;
}
