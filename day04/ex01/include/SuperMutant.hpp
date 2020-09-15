#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

#include "../include/Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy
{
private:
public:
	SuperMutant(void);
	SuperMutant(const std::string &type, int hp);
	SuperMutant(const SuperMutant &super_mutant);
	~SuperMutant();

	SuperMutant &operator=(const SuperMutant &super_mutant);

	virtual void takeDamage(int damage);
};

#endif