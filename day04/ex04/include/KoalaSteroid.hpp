#ifndef KOALASTERIOD_H
#define KOALASTERIOD_H

#include "IAsteroid.hpp"

class KoalaSteroid : public IAsteroid
{
private:
	std::string _name;

public:
	KoalaSteroid();
	~KoalaSteroid();

	std::string getName() const;
	std::string beMined(StripMiner *) const;
	std::string beMined(DeepCoreMiner *) const;
};

#endif
