#include "../include/AsteroKreog.hpp"

AsteroKreog::AsteroKreog()
{
	_name = "Astero Kreog";
	return;
}

AsteroKreog::~AsteroKreog()
{
	return;
}

std::string AsteroKreog::getName() const
{
	return _name;
}

std::string AsteroKreog::beMined(StripMiner *) const
{
	return "Flavium";
}

std::string AsteroKreog::beMined(DeepCoreMiner *) const
{
	return "Dragonite";
}
