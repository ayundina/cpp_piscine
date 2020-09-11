#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;

	Sorcerer(void);

public:
	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer(const Sorcerer &sorcerer);
	~Sorcerer(void);

	Sorcerer &operator=(const Sorcerer &sorcerer);
	const std::string &getName(void) const;
	const std::string &getTitle(void) const;
	void polymorph(const Victim &victim) const;
	void polymorph(const Peon &peon) const;
};

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer);

#endif