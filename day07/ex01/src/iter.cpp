#include <iostream>

template <typename T>
void print(T &element)
{
	std::cout << element << std::endl;
	return;
}

template <typename T>
void iter(T *array, const int &length, void (*function_ptr)(T &))
{
	for (int i = 0; i < length; i++)
	{
		function_ptr(array[i]);
	}
	return;
}

template void print<int>(int &element);
template void print<char>(char &element);
template void iter<int>(int *array, const int &length, void (*function_ptr)(int &));
template void iter<char>(char *array, const int &length, void (*function_ptr)(char &));
