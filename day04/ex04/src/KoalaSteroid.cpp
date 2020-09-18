#include "../include/KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid()
{
	_name = "Koala Steroid";
	return;
}

KoalaSteroid::~KoalaSteroid()
{
	return;
}

std::string KoalaSteroid::getName() const
{
	return _name;
}

std::string KoalaSteroid::beMined(StripMiner *) const
{
	return "Tartarite";
}

std::string KoalaSteroid::beMined(DeepCoreMiner *) const
{
	return "Meium";
}
