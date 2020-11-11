#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *p_str = &str;
	std::string &r_str = str;

	std::cout << "\toriginal string:\t" << str << std::endl;
	std::cout << "\tpointer:\t\t" << *p_str << std::endl;
	std::cout << "\treferece:\t\t" << r_str << std::endl;
	return 0;
}
