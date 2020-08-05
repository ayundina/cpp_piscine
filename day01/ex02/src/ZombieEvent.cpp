#include "../include/ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
  _event_type = type;
  return;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
  Zombie *new_zombie = new Zombie(name, _event_type);
  return new_zombie;
}

ZombieEvent::ZombieEvent(std::string type)
{
  setZombieType(type);
  std::cout << "\n\tYou just created a wave of ";
  std::cout << _event_type << " zombies... Watch out!\n";
  return;
}

ZombieEvent::~ZombieEvent(void)
{
  std::cout << "\n\tThis wave is over... Hope you survived\n\n";
  return;
}
