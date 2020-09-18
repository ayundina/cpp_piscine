#ifndef STRIPMINER_H
#define STRIPMINER_H

#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
private:
public:
	StripMiner();
	~StripMiner();

	void mine(IAsteroid *);
};

#endif
