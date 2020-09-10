#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
public:
	SuperTrap(void);
	SuperTrap(const std::string &name);
	SuperTrap(const SuperTrap &ft);
	~SuperTrap(void);

	SuperTrap &operator=(const SuperTrap &st);
};

#endif
