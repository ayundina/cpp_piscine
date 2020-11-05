#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
	std::string _type;
	std::string _name;

public:
	Zombie(std::string name, std::string type);
	~Zombie(void);

	void announce(std::string type) const;
	const std::string &getType() const;
	const std::string &getName() const;
};

#endif
