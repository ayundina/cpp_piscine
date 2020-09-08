#ifndef NINJATRAP_H
#define NINJATRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
public:
	NinjaTrap(void);
	NinjaTrap(const std::string &name);
	NinjaTrap(const NinjaTrap &nt);
	~NinjaTrap(void);

	void ninjaShoebox(const FragTrap &ft);
	void ninjaShoebox(const ScavTrap &st);
	void ninjaShoebox(const NinjaTrap &nt);
};

#endif
