#include <iostream>
#include <string>

std::string stringToUppercase(std::string argument)
{
  std::string output;
  int string_size = argument.size();
  for (int i = 0; i < string_size; i++)
  {
    if (argument[i] >= 'a' && argument[i] <= 'z')
      output.push_back(argument[i] - ' ');
    else
      output.push_back(argument[i]);
  }
  return output;
}

int main(int argc, char **argv)
{
  std::string argument;
  if (argc > 1)
  {
    for (int i = 1; i < argc; i++)
      std::cout << stringToUppercase(argv[i]);
    std::cout << std::endl;
  }
  else
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  return 0;
}