/*
Weapon class:

_type string
getType() - returns a reference to _type string
setType()


HumanA class: 
HumanB class:
Weapon ^
name
attack() - displays "NAME attacks with his WEAPON_TYPE"

code produces attacks with 
"crude spiked club"
THEN
"some other type of club", in both test cases:

store the Weapon as a pointer? As a reference?
Why? Is it the best choice in light of what’s asked? 
These are the questions you should ask yourself before turning in this exercise.

	}
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
*/

#include "../include/HumanB.hpp" 

HumanB::HumanB(std::string name)
{
	_name = name;
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void HumanB::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon->_type << "\n";
	return;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
	return;
}
