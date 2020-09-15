#ifndef POWERFIST_H
#define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
public:
	PowerFist(void);
	PowerFist(const std::string &name, int apcost, int damage);
	PowerFist(const PowerFist &pfist);
	~PowerFist(void);

	PowerFist &operator=(const PowerFist &pfist);

	void attack() const;
};

#endif