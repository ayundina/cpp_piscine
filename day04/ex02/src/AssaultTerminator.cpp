#include "../include/AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *\n";
	return;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back...\n";
	return;
}

ISpaceMarine *AssaultTerminator::clone() const
{
	ISpaceMarine *at_clone = new AssaultTerminator();
	return at_clone;
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!\n";
	return;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
	return;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";
	return;
}
