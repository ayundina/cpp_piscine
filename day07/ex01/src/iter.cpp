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
