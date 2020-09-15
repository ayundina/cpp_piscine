#include "../include/Squad.hpp"

Squad::Squad()
{
	_count = 0;
	_unit = new ISpaceMarine *;
	return;
}

Squad::~Squad()
{
	for (int i = 0; i < _count; i++)
	{
		delete _unit[i];
	}
	delete[] _unit;
	return;
}

int Squad::getCount() const
{
	return _count;
}

ISpaceMarine *Squad::getUnit(int num) const
{
	if (num < _count)
		return _unit[num];
	return nullptr;
}

int Squad::push(ISpaceMarine *sm)
{
	_unit[_count] = sm;
	_count += 1;
	return _count;
}
