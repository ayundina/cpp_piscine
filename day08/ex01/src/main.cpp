#include "../include/span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	try
	{
		unsigned int size = 10000;
		std::srand(std::time(nullptr));
		int arr[size];
		for (unsigned int i = 0; i < size; i++)
		{
			arr[i] = std::rand()/* % size*/;
		}
		Span sp = Span(size);
		sp.addRange(arr, arr + size);
		sp.printContent();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}