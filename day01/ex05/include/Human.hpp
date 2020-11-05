#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"

class Human
{
private:
	const Brain _brain;

public:
	Human();
	~Human();

	std::string identify() const;
	Brain getBrain() const;
};

#endif
