#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	void grenadeAttack(std::string const &target);
	void riflesAttack(std::string const &target);
	void cryoAttack(std::string const &target);
	void explosiveAttack(std::string const &target);
	void flameAttack(std::string const &target);

public:
	FragTrap(void);
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &ft);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &ft);

	int vaulthunterDotExe(std::string const &target);
};

#endif
