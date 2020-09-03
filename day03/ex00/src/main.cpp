/*

class FragTrap (robot)
values:
• Hit points (100)
• Max hit points (100)
• Energy points (100)
• Max energy points (100)
• Level (1)
• Name (Parameter of constructor)
• Melee attack damage (30)
• Ranged attack damage (20)
• Armor damage reduction (5)

functions:
• rangedAttack(std::string const & target)
• meleeAttack(std::string const & target)
• takeDamage(unsigned int amount)
• beRepaired(unsigned int amount)

vaulthunter_dot_exe(std::string const & target)
that will effect a semi-random attack on the target
chooses a random attack from a pool of at least 5 possible attacks.
function costs 25 energy points to run. If not have enough energy points -
do nothing else than print something indicating it’s out of energy.

functions display something to describe what happens.

rangedAttack example:
FR4G-TP <name> attacks <target> at range, causing <damage> points of damage!

constructor and destructor must also display something

*/

#include "../include/FragTrap.hpp"

int main(void)
{
	FragTrap ft_one("ONE");
	FragTrap ft_copy_one(ft_one);
	FragTrap ft_default;
	FragTrap ft_copy_two = ft_copy_one;
	ft_copy_two = ft_default;

	int one_hp = ft_one.getHitPoints();
	int copy_one_hp = ft_copy_one.getHitPoints();
	while (one_hp > 0 && copy_one_hp > 0)
	{
		ft_one.rangedAttack(ft_copy_one.getName());
		ft_copy_one.takeDamage(ft_one.getRangeDamage());
		copy_one_hp = ft_copy_one.getHitPoints();

		ft_copy_one.meleeAttack(ft_one.getName());
		ft_one.takeDamage(ft_copy_one.getMeleeDamage());
		ft_one.beRepaired(ft_copy_one.getMeleeDamage());
		one_hp = ft_one.getHitPoints();
	}
	int damage;
	while ((damage = ft_default.vaulthunterDotExe(ft_one.getName())))
	{
		ft_one.takeDamage(damage);
	}
	return 0;
}
