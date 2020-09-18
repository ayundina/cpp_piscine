#include "../include/DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner()
{
	return;
}

DeepCoreMiner::~DeepCoreMiner()
{
	return;
}

void DeepCoreMiner::mine(IAsteroid *a)
{
	std::cout << "* mining deep... got ";
	std::cout << a->beMined(this) << " *\n";
	return;
}
