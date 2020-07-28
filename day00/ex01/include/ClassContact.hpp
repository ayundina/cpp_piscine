#ifndef CLASSCONTACT_H
#define CLASSCONTACT_H

#include <string>
#include <iostream>

class Contact
{
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string login;
  std::string postal_address;
  std::string email_address;
  std::string phone_number;
  std::string birthday_date;
  std::string favorite_meal;
  std::string underwear_color;
  std::string darkest_secret;

public:
  Contact(void);
  ~Contact(void);

  void New(void);
  void PrintAllContacts(int index);
  void PrintContact(void);
};

#endif
