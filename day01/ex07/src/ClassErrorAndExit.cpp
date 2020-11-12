#include "ClassErrorAndExit.hpp"

ErrorAndExit::ErrorAndExit()
{
	return;
}

ErrorAndExit::~ErrorAndExit()
{
	return;
}

void ErrorAndExit::showAndExit(const std::string &error_message)
{
	system("clear");
	std::cout << std::endl
						<< std::endl
						<< "\t";
	std::cout << error_message;
	std::cout << std::endl
						<< std::endl;
	exit(1);
	return;
}
