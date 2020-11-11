#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _type;
	std::string _name;

public:
	Zombie(const std::string &name, const std::string &type);
	~Zombie();

	void announce() const;
	const std::string &getType() const;
	const std::string &getName() const;
};

#endif
