#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>

class Victim
{
private:
protected:
	std::string _name;

	Victim(void);

public:
	Victim(const std::string &name);
	Victim(const Victim &victim);
	~Victim(void);

	Victim &operator=(const Victim &victim);
	const std::string &getName(void) const;
	void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &os, const Victim &victim);

#endif