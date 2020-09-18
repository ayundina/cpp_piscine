#ifndef MININGBARGE_H
#define MININGBARGE_H

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

#define CAPACITY 4

class MiningBarge
{
private:
	IMiningLaser *_equipment[CAPACITY];

public:
	MiningBarge();
	MiningBarge(IMiningLaser *);
	MiningBarge(const MiningBarge &);
	MiningBarge &operator=(const MiningBarge &);
	~MiningBarge();

	void equip(IMiningLaser *);
	void mine(IAsteroid *) const;
};

#endif