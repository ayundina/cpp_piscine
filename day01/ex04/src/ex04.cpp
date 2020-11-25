#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *p_str = &str;
	std::string &r_str = str;

	std::cout << "	original string:	" << str << std::endl;
	std::cout << "	pointer:		" << *p_str << std::endl;
	std::cout << "	referece:		" << r_str << std::endl;
	return 0;
}
