#include "../include/Pony.hpp"
#include <string>

void Pony::eat(void) const
{
  std::cout << "\t" << _name << " says 'yum' when eats " << _fav_food << " 🌾🐴\n";
  return;
}

void Pony::play(void) const
{
  std::cout << "\t" << _name << " plays ⚽🐴\n";
  return;
}

void Pony::love(void) const
{
  std::cout << "\t" << _name << "'s love is pure even if ";
  std::cout << _name << "'s color is " << _color << " 🐴♥️ ♥️ 🐴\n";
  return;
}

Pony::Pony(std::string name, std::string color, std::string fav_food)
{
  _name = name;
  _color = color;
  _fav_food = fav_food;
  std::cout << "\n\n\t" << _name << "'s Pony object was initialized\n";
  std::cout << "\n\t----------------------------------------\n";
  return;
}

Pony::~Pony(void)
{

  std::cout << "\tPony from " << &_name << " was removed\n";
  return;
}