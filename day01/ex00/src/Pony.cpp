#include "Pony.hpp"

void Pony::eat() const
{
	std::cout << "\t" << _name << " says 'yum' when eats " << _fav_food << " 🌾🐴";
	std::cout << std::endl;
	return;
}

void Pony::play() const
{
	std::cout << "\t" << _name << " plays ⚽🐴" << std::endl;
	return;
}

void Pony::love() const
{
	std::cout << "\t" << _name << "'s love is pure even if ";
	std::cout << _name << "'s color is " << _color << " 🐴♥️ ♥️ 🐴" << std::endl;
	return;
}

const std::string &Pony::getName() const
{
	return _name;
}

Pony::Pony(std::string name, std::string color, std::string fav_food)
{
	_name = name;
	_color = color;
	_fav_food = fav_food;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\t" << _name << "'s Pony object was initialized" << std::endl;
	std::cout << std::endl;
	std::cout << "\t----------------------------------------" << std::endl;
	return;
}

Pony::~Pony(void)
{
	std::cout << "\tPony from " << &_name << " was removed" << std::endl;
	return;
}