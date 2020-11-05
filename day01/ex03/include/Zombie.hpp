#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
	std::string _type;
	std::string _name;

public:
	Zombie(const std::string &name);
	~Zombie();

	void announce() const;
};

#endif
