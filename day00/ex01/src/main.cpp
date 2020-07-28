#include "../include/ClassPhonebook.hpp"

std::string ShowMenu(void)
{
  std::string selection;

  std::cout << "\n\n\tWelcome to your Awesome Phonebook!\n\n";
  std::cout << "\t1. Add new contact\n";
  std::cout << "\t2. Search contact\n";
  std::cout << "\t3. Exit\n\n";
  std::cout << "\tYou selected ";
  std::getline(std::cin, selection);
  std::cout << "\n";
  return selection;
}

int SelectContact(int index)
{
  std::string contact_selected;
  int selected;

  std::cout << "\n\tYou selected ";
  std::getline(std::cin, contact_selected);
  std::cout << "\n";
  selected = contact_selected[0] - '0';
  if (selected <= index && selected > 0)
    return selected;
  else
  {
    std::cout << "\tYour selection is invalid. Try again.\n";
  }
  return 0;
}

int Add(Phonebook *phonebook, int index)
{
  if (index < SIZE)
    phonebook->AddNewContact(index);
  else
  {
    std::cout << "\n\t💩 Sorry, your Awesome Phonebook is full. ";
    std::cout << "Please, exit to start again. 💩\n";
  }
  if (index < SIZE)
    index += 1;
  return index;
}

void Search(Phonebook phonebook, int index)
{
  int contact_selected;

  phonebook.ShowAllContacts(index);
  contact_selected = SelectContact(index);
  if (contact_selected)
    phonebook.PrintOneContact(contact_selected - 1);
  return;
}

int main()
{
  std::string menu_selection = ShowMenu();
  int index = 0;
  Phonebook phonebook;

  while (1)
  {
    if (menu_selection[0] == '1')
    {
      index = Add(&phonebook, index);
      menu_selection = ShowMenu();
    }
    else if (menu_selection[0] == '2')
    {
      Search(phonebook, index);
      menu_selection = ShowMenu();
    }
    else if (menu_selection[0] == '3')
    {
      std::cout << "\tSee you again soon!\n\n";
      break;
    }
    else
    {
      std::cout << "\tYour selection is invalid. Try again.\n";
      menu_selection = ShowMenu();
    }
  }
  return 0;
}