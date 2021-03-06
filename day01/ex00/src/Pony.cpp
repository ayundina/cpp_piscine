#include "Pony.hpp"

void Pony::eat() const
{
	std::cout << "	" << _name << " says 'yum' when eats " << _fav_food << " 🌾🐴";
	std::cout << std::endl;
	return;
}

void Pony::play() const
{
	std::cout << "	" << _name << " plays ⚽🐴" << std::endl;
	return;
}

void Pony::love() const
{
	std::cout << "	" << _name << "'s love is pure even if ";
	std::cout << _name << "'s color is " << _color << " 🐴♥️ ♥️ 🐴" << std::endl;
	return;
}

const std::string &Pony::getName() const
{
	return _name;
}

Pony::Pony(const std::string &name, const std::string &color, const std::string &fav_food)
{
	_name = name;
	_color = color;
	_fav_food = fav_food;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "	" << _name << "'s Pony object was initialized" << std::endl;
	std::cout << std::endl;
	std::cout << "	----------------------------------------" << std::endl;
	return;
}

Pony::~Pony()
{
	std::cout << "	Pony from " << &_name << " was removed" << std::endl;
	return;
}