#include "../include/FragTrap.hpp"

FragTrap::FragTrap(void)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_name = "Factory_Default";
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "FR4G-TP " << _name << " is created\n\n";
	return;
}

FragTrap::FragTrap(std::string name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_level = 1;
	_name = name;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "FR4G-TP " << _name << " is created\n\n";
	return;
}

FragTrap::FragTrap(const FragTrap &ft)
{
	_hit_points = ft._hit_points;
	_max_hit_points = ft._max_hit_points;
	_energy_points = ft._energy_points;
	_max_energy_points = ft._max_energy_points;
	_level = ft._level;
	_name = ft._name + "_copy";
	_melee_attack_damage = ft._melee_attack_damage;
	_ranged_attack_damage = ft._ranged_attack_damage;
	_armor_damage_reduction = ft._armor_damage_reduction;
	std::cout << "FR4G-TP " << _name << " is created\n\n";
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP " << _name << " is deactivated\n\n";
	return;
}

FragTrap &FragTrap::operator=(const FragTrap &ft)
{
	_hit_points = ft._hit_points;
	_max_hit_points = ft._max_hit_points;
	_energy_points = ft._energy_points;
	_max_energy_points = ft._max_energy_points;
	_level = ft._level;
	_name = _name + "=" + ft._name;
	_melee_attack_damage = ft._melee_attack_damage;
	_ranged_attack_damage = ft._ranged_attack_damage;
	_armor_damage_reduction = ft._armor_damage_reduction;
	std::cout << "FR4G-TP " << _name << " is changed\n\n";
	return *this;
}

void FragTrap::cryoAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " says: \"Cryo me a river!\"\n";
	std::cout << target << " was frozen with ";
	std::cout << _melee_attack_damage << " points damage\n\n";
	return;
}

void FragTrap::explosiveAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " says: \"Pull pin, throw!\"\n";
	std::cout << target << " berely got out with ";
	std::cout << _melee_attack_damage << " points damage\n\n";
	return;
}

void FragTrap::flameAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " says: \"Remember, use caution near an open flame!\"\n";
	std::cout << target << " was burned with ";
	std::cout << _melee_attack_damage << " points damage\n\n";
	return;
}

int FragTrap::vaulthunterDotExe(std::string const &target)
{
	if (enoughEnergyPoints())
	{
		int damage[TYPES] = {30, 20, 45, 70, 15};
		int type = randomNum();

		void (FragTrap::*attack[TYPES])(std::string const &target);
		attack[0] = &FragTrap::meleeAttack;
		attack[1] = &FragTrap::rangedAttack;
		// attack[2] = &FragTrap::riflesAttack;
		attack[2] = &FragTrap::cryoAttack;
		attack[3] = &FragTrap::explosiveAttack;
		attack[4] = &FragTrap::flameAttack;

		(this->*(attack[type]))(target);
		return damage[type];
	}
	std::cout << "Nah, that's a blank shot for " << _name << "\n";
	std::cout << "Energy points " << _energy_points << "/25\n\n";
	return 0;
}
