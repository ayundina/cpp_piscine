#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
public:
	void announce(void) const;

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

private:
	std::string _type;
	std::string _name;
};

#endif
