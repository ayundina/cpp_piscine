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
  contact[index].New();
  return;
}

void Phonebook::ShowAllContacts(int index)
{
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