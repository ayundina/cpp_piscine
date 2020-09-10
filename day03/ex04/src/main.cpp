#include "../include/ClapTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/NinjaTrap.hpp"
#include "../include/SuperTrap.hpp"

void testFragTrap(void)
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
	return;
}

void testScavTrap(void)
{
	ScavTrap st_default;
	ScavTrap st_one("SCAV_ONE");
	while (st_default.challengeNewcomer(st_one.getName()))
	{
		;
	}
	return;
}

void testNinjaTrap(void)
{
	NinjaTrap nt_one("NINJA_ONE");
	NinjaTrap nt_default;
	NinjaTrap nt_copy(nt_one);
	FragTrap ft_default;

	nt_default = nt_one;
	nt_one.rangedAttack(nt_copy.getName());
	nt_copy.takeDamage(nt_one.getRangeDamage());

	nt_one.rangedAttack(nt_default.getName());
	nt_default.takeDamage(nt_one.getRangeDamage());

	nt_one.ninjaShoebox(ft_default);
	ft_default.takeDamage(nt_one.getMeleeDamage());
	return;
}

void testSuperTrap(void)
{
	SuperTrap st_default;
	SuperTrap st_one("One");
	SuperTrap st_one_copy = st_one;

	st_one_copy.ninjaShoebox((FragTrap)st_default);
	int damage = st_one.vaulthunterDotExe(st_default.getName());
	st_default.takeDamage(damage);
	return;
}

int main(void)
{
	// testFragTrap();
	// testScavTrap();
	// testNinjaTrap();
	testSuperTrap();
	return 0;
}
