#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
private:
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &ft);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &ft);

	void cryoAttack(std::string const &target);
	void explosiveAttack(std::string const &target);
	void flameAttack(std::string const &target);
	int vaulthunterDotExe(std::string const &target);
};

#endif
