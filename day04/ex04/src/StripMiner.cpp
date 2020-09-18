#include "../include/StripMiner.hpp"

StripMiner::StripMiner()
{
	return;
}

StripMiner::~StripMiner()
{
	return;
}

void StripMiner::mine(IAsteroid *a)
{
	std::cout << "* strip mining... got ";
	std::cout << a->beMined(this) << " *\n";
	return;
}
