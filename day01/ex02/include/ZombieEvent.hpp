#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include "Zombie.hpp"

class ZombieEvent
{
public:
  Zombie *newZombie(std::string name);

  ZombieEvent(std::string type);
  ~ZombieEvent(void);

  std::string _event_type;

private:
  void setZombieType(std::string type);
};

#endif
