#include "contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

void Contact::addNew()
{
	int fields = 11;

	std::cout << "	1/" << fields << "	First name:		";
	std::getline(std::cin, _first_name);
	std::cout << "	2/" << fields << "	Last name:		";
	std::getline(std::cin, _last_name);
	std::cout << "	3/" << fields << "	Nickname:		";
	std::getline(std::cin, _nickname);
	std::cout << "	4/" << fields << "	Login:			";
	std::getline(std::cin, _login);
	std::cout << "	5/" << fields << "	Postall address:	";
	std::getline(std::cin, _postal_address);
	std::cout << "	6/" << fields << "	Email address:		";
	std::getline(std::cin, _email_address);
	std::cout << "	7/" << fields << "	Phone number:		";
	std::getline(std::cin, _phone_number);
	std::cout << "	8/" << fields << "	Birthday date:		";
	std::getline(std::cin, _birthday_date);
	std::cout << "	9/" << fields << "	Favorite meal:		";
	std::getline(std::cin, _favorite_meal);
	std::cout << "	10/" << fields << "	Underwear color:	";
	std::getline(std::cin, _underwear_color);
	std::cout << "	11/" << fields << "	Darkest secret:		";
	std::getline(std::cin, _darkest_secret);

	return;
}

void Contact::PrintLimitedWidthField(const std::string &data, const int &width) const
{
	if ((int)data.length() > (width - 1))
	{
		std::cout.write(data.c_str(), 7);
		std::cout << ".";
	}
	else
	{
		std::cout.width(width);
		std::cout << std::right << data;
	}
	std::cout << " | ";
	return;
}

void Contact::printContactPreview(const int &index) const
{
	int width = 8;

	std::cout.width(width);
	std::cout << std::right << "	" << index << ".";
	std::cout << " | ";
	PrintLimitedWidthField(_first_name, width);
	PrintLimitedWidthField(_last_name, width);
	PrintLimitedWidthField(_nickname, width);
	std::cout << std::endl;
	return;
}

void Contact::printContactContent() const
{
	std::cout << "	First name:		" << _first_name << std::endl;
	std::cout << "	Last name:		" << _last_name << std::endl;
	std::cout << "	Nickname:		" << _nickname << std::endl;
	std::cout << "	Login:			" << _login << std::endl;
	std::cout << "	Postall address:	" << _postal_address << std::endl;
	std::cout << "	Email address:		" << _email_address << std::endl;
	std::cout << "	Phone number:		" << _phone_number << std::endl;
	std::cout << "	Birthday date:		" << _birthday_date << std::endl;
	std::cout << "	Favorite meal:		" << _favorite_meal << std::endl;
	std::cout << "	Underwear color:	" << _underwear_color << std::endl;
	std::cout << "	Darkest secret:		" << _darkest_secret << std::endl;
	return;
}
