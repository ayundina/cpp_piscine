#ifndef ASSAULTTERMINATOR_H
#define ASSAULTTERMINATOR_H

#include "TacticalMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:
public:
	AssaultTerminator();
	~AssaultTerminator();

	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif