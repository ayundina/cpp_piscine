#include "../include/NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	_hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_level = 1;
	_name = "Factory_Default";
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
	std::cout << "NINJ4-TP " << _name << " is created\n\n";
	return;
}

NinjaTrap::NinjaTrap(const std::string &name)
{
	_hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_level = 1;
	_name = name;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
	std::cout << "NINJ4-TP " << _name << " is created\n\n";
	return;
}

NinjaTrap::NinjaTrap(const NinjaTrap &nt)
{
	_hit_points = nt._hit_points;
	_max_hit_points = nt._max_hit_points;
	_energy_points = nt._energy_points;
	_max_energy_points = nt._max_energy_points;
	_level = nt._level;
	_name = nt._name + "_copy";
	_melee_attack_damage = nt._melee_attack_damage;
	_ranged_attack_damage = nt._ranged_attack_damage;
	_armor_damage_reduction = nt._armor_damage_reduction;
	std::cout << "NINJ4-TP " << _name << " is created\n\n";
	return;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NINJ4-TP " << _name << " is deactivated\n\n";
	return;
}

void NinjaTrap::ninjaShoebox(const FragTrap &ft)
{
	std::cout << "NINJ4-TP " << _name << " says: \"Bop!\"\n";
	std::cout << ft.getName() << " was hit with " << _melee_attack_damage;
	std::cout << " points damage\n\n";
	return;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &st)
{
	std::cout << "NINJ4-TP " << _name << " says: \"Take that!\"\n";
	std::cout << st.getName() << " was hit with " << _melee_attack_damage;
	std::cout << " points damage\n\n";
	return;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &nt)
{
	std::cout << "NINJ4-TP " << _name << " says: \"Heyyah!\"\n";
	std::cout << nt.getName() << " was hit with " << _melee_attack_damage;
	std::cout << " points damage\n\n";
	return;
}
