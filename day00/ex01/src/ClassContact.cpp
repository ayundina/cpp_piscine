#include "../include/ClassContact.hpp"

Contact::Contact(void)
{
  return;
}

Contact::~Contact(void)
{
  return;
}

void Contact::New(void)
{
  int fields = 11;

  std::cout << "\t1/" << fields << "\tFirst name:\t\t";
  std::getline(std::cin, first_name);
  std::cout << "\t2/" << fields << "\tLast name:\t\t";
  std::getline(std::cin, last_name);
  std::cout << "\t3/" << fields << "\tNickname:\t\t";
  std::getline(std::cin, nickname);
  std::cout << "\t4/" << fields << "\tLogin:\t\t\t";
  std::getline(std::cin, login);
  std::cout << "\t5/" << fields << "\tPostall address:\t";
  std::getline(std::cin, postal_address);
  std::cout << "\t6/" << fields << "\tEmail address:\t\t";
  std::getline(std::cin, email_address);
  std::cout << "\t7/" << fields << "\tPhone number:\t\t";
  std::getline(std::cin, phone_number);
  std::cout << "\t8/" << fields << "\tBirthday date:\t\t";
  std::getline(std::cin, birthday_date);
  std::cout << "\t9/" << fields << "\tFavorite meal:\t\t";
  std::getline(std::cin, favorite_meal);
  std::cout << "\t10/" << fields << "\tUnderwear color:\t";
  std::getline(std::cin, underwear_color);
  std::cout << "\t11/" << fields << "\tDarkest secret:\t\t";
  std::getline(std::cin, darkest_secret);

  return;
}

void PrintLimitedWidthField(std::string data, int width)
{
  if ((int)data.length() > (width - 1))
  {
    std::cout.write(data.c_str(), 7);
    std::cout << ".";
  }
  else
  {
    std::cout.width(width);
    std::cout << std::left << data;
  }
  std::cout << " | ";
  return;
}

void Contact::PrintAllContacts(int index)
{
  int width = 8;

  std::cout.width(width);
  std::cout << std::left << "\t" << index << ".";
  std::cout << " | ";
  PrintLimitedWidthField(first_name, width);
  PrintLimitedWidthField(last_name, width);
  PrintLimitedWidthField(nickname, width);
  std::cout << std::endl;
  return;
}

void Contact::PrintContact(void)
{
  std::cout << "\tFirst name:\t\t" << first_name << std::endl;
  std::cout << "\tLast name:\t\t" << last_name << std::endl;
  std::cout << "\tNickname:\t\t" << nickname << std::endl;
  std::cout << "\tLogin:\t\t\t" << login << std::endl;
  std::cout << "\tPostall address:\t" << postal_address << std::endl;
  std::cout << "\tEmail address:\t\t" << email_address << std::endl;
  std::cout << "\tPhone number:\t\t" << phone_number << std::endl;
  std::cout << "\tBirthday date:\t\t" << birthday_date << std::endl;
  std::cout << "\tFavorite meal:\t\t" << favorite_meal << std::endl;
  std::cout << "\tUnderwear color:\t" << underwear_color << std::endl;
  std::cout << "\tDarkest secret:\t\t" << darkest_secret << std::endl;
  return;
}
