#ifndef DEEPCOREMINER_H
#define DEEPCOREMINER_H

#include "IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser
{
private:
public:
	DeepCoreMiner();
	~DeepCoreMiner();

	void mine(IAsteroid *);
};

#endif
