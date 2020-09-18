#ifndef ASTEROKREOG_H
#define ASTEROKREOG_H

#include "IAsteroid.hpp"

class AsteroKreog : public IAsteroid
{
private:
	std::string _name;

public:
	AsteroKreog();
	~AsteroKreog();

	std::string getName() const;
	std::string beMined(StripMiner *) const;
	std::string beMined(DeepCoreMiner *) const;
};

#endif
