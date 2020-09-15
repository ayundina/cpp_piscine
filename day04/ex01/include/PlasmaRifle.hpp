#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
public:
	PlasmaRifle(void);
	PlasmaRifle(const std::string &name, int apcost, int damage);
	PlasmaRifle(const PlasmaRifle &prifle);
	~PlasmaRifle(void);

	PlasmaRifle &operator=(const PlasmaRifle &prifle);

	void attack() const;
};

#endif