#ifndef CLASSPHONEBOOK_H
#define CLASSPHONEBOOK_H

#include "contact.hpp"

#define PB_SIZE 8

class Phonebook
{
private:
	Contact _contact[PB_SIZE];

public:
	Phonebook();
	~Phonebook();

	void addNewContact(int &index);
	void searchContact(const int &index) const;
	int selectContact(const int &index) const;
	void printListOfContacts(const int &index) const;
	void printContact(const int &index) const;
};

#endif
