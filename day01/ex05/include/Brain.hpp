#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
private:
	int _iq;
	Brain *_address;

public:
	Brain();
	~Brain();

	std::string identify() const;
};

#endif
