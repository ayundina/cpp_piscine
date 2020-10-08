#include <iostream>

template <typename T>
void toEach(T &element)
{
  std::cout << element << std::endl;
  return;
}

template <typename T>
void iter(T *array, const int &length, void (*fptr)(T &))
{
  for (int i = 0; i < length; i++)
  {
    fptr(array[i]);
  }
  return;
}
