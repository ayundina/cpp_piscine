#include "../include/FragTrap.hpp"
#include "../include/ScavTrap.hpp"

int main(void)
{
	FragTrap ft_one("ONE");
	FragTrap ft_copy_one(ft_one);
	FragTrap ft_default;
	FragTrap ft_copy_two = ft_copy_one;
	ScavTrap st_default;
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
	while (st_default.challengeNewcomer(ft_default.getName()))
	{
		;
	}
	return 0;
}
