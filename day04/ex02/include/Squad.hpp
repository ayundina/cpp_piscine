#ifndef SQUAD_H
#define SQUAD_H

#include "ISquad.hpp"
#include <iostream>

class Squad : public ISquad
{
private:
	int _count;
	ISpaceMarine **_unit;

public:
	Squad();
	~Squad();

	int getCount() const;
	ISpaceMarine *getUnit(int) const;
	int push(ISpaceMarine *);
};

#endif