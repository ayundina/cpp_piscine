#ifndef PONY_H
#define PONY_H

#include <iostream>

class Pony
{
public:
  Pony(std::string name, std::string color, std::string fav_food);
  ~Pony(void);

  void eat(void) const;
  void play(void) const;
  void love(void) const;

  std::string _name;

private:
  std::string _color;
  std::string _fav_food;
};

#endif