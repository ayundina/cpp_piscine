#ifndef CLASSCONTACT_H
#define CLASSCONTACT_H

#include <string>
#include <iostream>
#include <iomanip>

#define PREVIEW_FIELD_WIDTH 10

class Contact
{
private:
  std::string _first_name;
  std::string _last_name;
  std::string _nickname;
  std::string _login;
  std::string _postal_address;
  std::string _email_address;
  std::string _phone_number;
  std::string _birthday_date;
  std::string _favorite_meal;
  std::string _underwear_color;
  std::string _darkest_secret;

  void printLimitedWidthField(const std::string &data) const;

public:
  Contact();
  ~Contact();

  void addNew();
  void printContactPreview(const int &index) const;
  void printContactContent() const;
};

#endif
