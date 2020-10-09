#include "iter.cpp"

int main()
{
	int int_array[5] = {0, 1, 2, 3, 4};
	iter(int_array, 5, &print);

	char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
	iter(char_array, 5, &print);
	return 0;
}