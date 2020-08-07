#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
	public:

	Brain(void);
	~Brain(void);

	std::string identify(void) const;

	private:
	int _iq;
	Brain const *_address;
};

#endif
