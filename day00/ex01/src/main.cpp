#include "../include/ClassPhonebook.hpp"

std::string ShowMenu(void)
{
  std::string selection;

  system("clear");
  std::cout << "\n\n\tWelcome to your Awesome Phonebook!\n\n";
  std::cout << "\t1. Add new contact\n";
  std::cout << "\t2. Search contact\n";
  std::cout << "\t3. Exit\n\n";
  std::cout << "\tYou selected ";
  std::getline(std::cin, selection);
  std::cout << "\n";
  std::cout << "\t--------------------------------------------\n";
  return selection;
}

int SelectContact(int index)
{
  std::string contact_selected;
  int selected;

  std::cout << "\tYou selected contact #";
  std::getline(std::cin, contact_selected);
  std::cout << "\n";
  std::cout << "\t--------------------------------------------\n";
  selected = contact_selected[0] - '0';
  if (selected <= index && selected > 0)
    return selected;
  else
  {
    std::cout << "\tContact #" << selected << " does not exist or\n";
    std::cout << "\tyour selection is invalid.\n";
    std::cout << "\tPress Enter to go to the main menu.\n";
  }
  return 0;
}

int Add(Phonebook *phonebook, int index)
{
  if (index < PB_SIZE)
  {
    std::cout << "\tYou are creating contact #";
    std::cout << index + 1 << "/" << PB_SIZE << std::endl;
    phonebook->AddNewContact(index);
    std::cout << "\n\tNew contact is saved in the Phonebook.\n";
    std::cout << "\tPress Enter to go to the main menu.\n";
  }
  else
  {
    std::cout << "\n\t💩 Sorry, your Awesome Phonebook is full. ";
    std::cout << "Please, exit to start again. 💩\n";
  }
  if (index < PB_SIZE)
    index += 1;
  std::cin.ignore();
  return index;
}

void Search(Phonebook phonebook, int index)
{
  int contact_selected;

  std::cout << "\tSaved contacts:\n";
  phonebook.ShowAllContacts(index);
  std::cout << "\n\tSelect contact to view details\n\n";
  contact_selected = SelectContact(index);
  if (contact_selected)
  {
    phonebook.PrintOneContact(contact_selected - 1);
    std::cout << "\n\tPress Enter to go to the main menu.\n";
  }
  std::cin.ignore();
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