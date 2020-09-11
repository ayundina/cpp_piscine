#ifndef PEON_H
#define PEON_H

#include "Victim.hpp"
#include <iostream>

class Peon : public Victim
{
private:
	Peon(void);

public:
	Peon(const std::string &name);
	Peon(const Peon &peon);
	~Peon(void);
	Peon &operator=(const Peon &peon);

	void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &os, const Peon &peon);

#endif