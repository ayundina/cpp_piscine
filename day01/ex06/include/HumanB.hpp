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



#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp" 

class HumanB
{
	public:

	HumanB(std::string name);
	~HumanB(void);

	void attack(void) const;
	void setWeapon(Weapon &weapon);

	private:
	Weapon *_weapon;
	std::string _name;
};

#endif