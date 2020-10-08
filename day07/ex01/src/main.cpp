/*

function template iter <3 parameters>
{
  returns nothing. 
}

parameters:

address of an array, 
length of the array
function that is called on each element of the array.

Wrap your work in an executable that prooves that your function template iter
works with any type of array and/or with an instantiated function template 
as a third parameter.

*/

#include "iter.cpp"

int main()
{
  int int_array[5] = {0, 1, 2, 3, 4};
  iter(int_array, 5, &toEach);

  char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
  iter(char_array, 5, &toEach);
  return 0;
}