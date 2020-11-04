#include "phonebook.hpp"

Phonebook::Phonebook()
{
	return;
}

Phonebook::~Phonebook()
{
	return;
}

void Phonebook::addNewContact(int &index)
{
	if (index < PB_SIZE)
	{
		std::cout << "	You are creating contact #";
		std::cout << index + 1 << "/" << PB_SIZE << std::endl;
		_contact[index].addNew();
		std::cout << std::endl;
		std::cout << "	New contact is saved in the Phonebook.";
		std::cout << std::endl;
		std::cout << "	Press Enter to go to the main menu.";
		std::cout << std::endl;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "	💩 Sorry, your Awesome Phonebook is full. ";
		std::cout << "Please, exit to start again. 💩";
		std::cout << std::endl;
	}
	if (index < PB_SIZE)
		index += 1;
	std::cin.ignore();
	return;
}

void Phonebook::searchContact(const int &index) const
{
	int contact_selected;

	std::cout << "	Saved contacts:";
	std::cout << std::endl;
	printListOfContacts(index);
	std::cout << std::endl;
	std::cout << "	Select contact to view details";
	std::cout << std::endl;
	std::cout << std::endl;
	contact_selected = selectContact(index);
	if (contact_selected)
	{
		printContact(contact_selected - 1);
		std::cout << std::endl;
		std::cout << "	Press Enter to go to the main menu.";
		std::cout << std::endl;
	}
	std::cin.ignore();
	return;
}

int Phonebook::selectContact(const int &index) const
{
	std::string contact_selected;
	int selected;

	std::cout << "	You selected contact #";
	std::getline(std::cin, contact_selected);
	std::cout << std::endl;
	std::cout << "	--------------------------------------------";
	std::cout << std::endl;
	selected = std::stoi(contact_selected);
	if (selected <= index && selected > 0)
		return selected;
	else
	{
		std::cout << "	Contact #" << selected << " does not exist or";
		std::cout << std::endl;
		std::cout << "	your selection is invalid.";
		std::cout << std::endl;
		std::cout << "	Press Enter to go to the main menu.";
		std::cout << std::endl;
	}
	return 0;
}

void Phonebook::printListOfContacts(const int &index) const
{
	for (int i = 0; i < index; i++)
	{
		_contact[i].printContactPreview(i + 1);
	}
	return;
}

void Phonebook::printContact(const int &index) const
{
	_contact[index].printContactContent();
	return;
}
