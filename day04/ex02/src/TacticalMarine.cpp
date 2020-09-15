#include "../include/TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!\n";
	return;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh...\n";
	return;
}

ISpaceMarine *TacticalMarine::clone() const
{
	ISpaceMarine *tm_clone = new TacticalMarine();
	return tm_clone;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!\n";
	return;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";
	return;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *\n";
	return;
}
