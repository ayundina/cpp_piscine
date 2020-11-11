/*

In which case is it appropriate to store the Weapon as a pointer?

It is appropriate to store the Weapon as a pointer in second case.
In initialization - HumanB jim("Jim") - pointer to the Weapon can be assigned
to null.
In - jim.setWeapon(club) - pointer the Weapon will be reassigned to club

As a reference?

It is appropriate to store the Weapon as a reference in first case.
References (and const-qualified types) have to be initialized in initialization
list and can not be reassigned.

Why?

Pointer, unlike reference can be set to null and be assigned to a value later.
That makes case one appropriate to use a reference to store the Weapon and
case two appropriate to use a pointer to store the Weapon.

*/

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}
