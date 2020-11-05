#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *p_str = &str;
	std::string &r_str = str;

	std::cout << "\toriginal string:\t" << str << "\n";
	std::cout << "\tpointer:\t\t" << *p_str << "\n";
	std::cout << "\treferece:\t\t" << r_str << "\n";
	return 0;
}
