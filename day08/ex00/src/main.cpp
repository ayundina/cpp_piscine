#include "../include/easyfind.hpp"

int main()
{
	try
	{
		searchContainer<std::vector<int> >();
		searchContainer<std::deque<int> >();
		searchContainer<std::list<int> >();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}