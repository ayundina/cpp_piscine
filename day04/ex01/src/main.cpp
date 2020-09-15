
#include "../include/PlasmaRifle.hpp"
#include "../include/PowerFist.hpp"
#include "../include/SuperMutant.hpp"
#include "../include/RadScorpion.hpp"
#include "../include/Character.hpp"

int main(void)
{
	Character *me = new Character("me");
	std::cout << *me;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	me->equip(pf);
	std::cout << *me;
	me->equip(pr);
	me->attack(b);
	std::cout << *me;
	// me->equip(pr);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;
	// me->attack(b);
	// std::cout << *me;

	while (b->getHP() != 0)
	{
		me->attack(b);
		std::cout << *me;
		std::cout << *b;
	}
	delete me;
	delete pr;
	delete pf;
	return 0;
}