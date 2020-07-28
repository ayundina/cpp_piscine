#include "../include/ClassPhonebook.hpp"

Phonebook::Phonebook(void)
{
  return;
}

Phonebook::~Phonebook(void)
{
  return;
}

void Phonebook::AddNewContact(int index)
{
  std::cout << "\tYou want to create contact #" << index + 1 << "/" << SIZE << std::endl;
  contact[index].New();
  return;
}

void Phonebook::ShowAllContacts(int index)
{
  std::cout << "\n\tMake selection to view details\n\n";
  for (int i = 0; i < index; i++)
  {
    contact[i].PrintAllContacts(i + 1);
  }
  return;
}

void Phonebook::PrintOneContact(int index)
{
  contact[index].PrintContact();
  return;
}