#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
public:
	std::string _type;
	std::string _name;

	void announce(std::string type) const;

	Zombie(std::string name, std::string type);
	~Zombie(void);

private:
};

#endif
