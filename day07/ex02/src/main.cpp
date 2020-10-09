#include "../include/Array.hpp"

int main()
{
	try
	{
		Array<int> int_array(5);

		for (int i = 0; i < int_array.size(); i++)
		{
			int_array[i] = i + 'A';
		}

		Array<int> int_array_copy(int_array);
		int_array[4] = 200;
		int_array.print();
		int_array_copy.print();

		Array<std::string> string_array(2);
		string_array[0] = "Hello";
		string_array[1] = "world!";
		string_array.print();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
