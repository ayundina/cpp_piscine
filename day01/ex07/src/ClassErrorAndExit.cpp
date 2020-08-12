#include "../include/main.hpp"

void ErrorAndExit::showAndExit(std::string error_message)
{
	system("clear");
	std::cout << "\n\n\t";
	std::cout << error_message;
	std::cout << "\n\n";
	exit(1);
	return;
}

ErrorAndExit::ErrorAndExit(void)
{
	return;
}

ErrorAndExit::~ErrorAndExit(void)
{
	return;
}
