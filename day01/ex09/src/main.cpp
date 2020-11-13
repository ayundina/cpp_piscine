#include "Logger.hpp"

int main(void)
{
	Logger logger;
	logger.log("console", "log message to console");
	logger.log("file", "log message to file");
	logger.log("somewhere", "log message to somewhere");
	return 0;
}
