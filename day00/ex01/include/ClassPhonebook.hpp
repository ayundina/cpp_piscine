#ifndef CLASSPHONEBOOK_H
#define CLASSPHONEBOOK_H

#include "ClassContact.hpp"
#include <iostream>

#define PB_SIZE 8

class Phonebook
{
  Contact contact[PB_SIZE];

public:
  Phonebook(void);
  ~Phonebook(void);

  void AddNewContact(int index);
  void ShowAllContacts(int index);
  void PrintOneContact(int index);
};

#endif
