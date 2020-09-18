#include "../include/MiningBarge.hpp"

MiningBarge::MiningBarge()
{
	for (int i = 0; i < CAPACITY; i++)
	{
		_equipment[i] = nullptr;
	}
	return;
}

MiningBarge::MiningBarge(IMiningLaser *ml)
{
	for (int i = 0; i < CAPACITY; i++)
	{
		_equipment[i] = nullptr;
	}
	this->equip(ml);
	return;
}

MiningBarge::MiningBarge(const MiningBarge &ml)
{
	for (int i = 0; i < CAPACITY; i++)
	{
		_equipment[i] = ml._equipment[i];
	}
	return;
}

MiningBarge &MiningBarge::operator=(const MiningBarge &ml)
{
	for (int i = 0; i < CAPACITY; i++)
	{
		_equipment[i] = ml._equipment[i];
	}
	return *this;
}

MiningBarge::~MiningBarge()
{
	return;
}

void MiningBarge::equip(IMiningLaser *ml)
{
	for (int i = 0; i < CAPACITY; i++)
	{
		if (_equipment[i] == nullptr)
		{
			_equipment[i] = ml;
			break;
		}
	}
	return;
}

void MiningBarge::mine(IAsteroid *a) const
{
	for (int i = 0; i < CAPACITY; i++)
	{
		if (_equipment[i] != nullptr)
		{
			_equipment[i]->mine(a);
		}
	}
	return;
}
