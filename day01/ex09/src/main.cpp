/*

Logger class must do logging.

two private functions:
logToConsole
logToFile

both take a string
and will respectively write it to the standard output
and append it to a file, 
which name will be stored in the Logger at creation time.

private function:
makeLogEntry

take a simple message as a string
and return a new string containing the message formatted to look like
a legitimate log entry: add the current date before the message,

log(std::string const & dest, std::string const & message):
make a log entry with the message, and pass it to logToFile or logToConsole,
depending on the dest parameter. 

As in the previous exercise, you have to use pointers
to members to select which function to call.

https://stackoverflow.com/questions/1924844/stdmap-of-member-function-pointers

*/

#include "../include/Logger.hpp"

int main(void)
{
	Logger logger;
	logger.log("console", "log message to console");
	logger.log("file", "log message to file");
	return 0;
}
