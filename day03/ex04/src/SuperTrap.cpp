#include "../include/SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 120;
	_max_energy_points = 120;
	_level = 1;
	_name = "Factory_Default";
	_melee_attack_damage = 60;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "SUPER-TP " << _name << " is created\n\n";
	return;
}

SuperTrap::SuperTrap(const std::string &name)
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
	std::cout << "SUPER-TP " << _name << " is created\n\n";
	return;
}

SuperTrap::SuperTrap(const SuperTrap &ft)
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
	std::cout << "SUPER-TP " << _name << " is created\n\n";
	return;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SUPER-TP " << _name << " is deactivated\n\n";
	return;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &st)
{
	_hit_points = st._hit_points;
	_max_hit_points = st._max_hit_points;
	_energy_points = st._energy_points;
	_max_energy_points = st._max_energy_points;
	_level = st._level;
	_name = _name + "=" + st._name;
	_melee_attack_damage = st._melee_attack_damage;
	_ranged_attack_damage = st._ranged_attack_damage;
	_armor_damage_reduction = st._armor_damage_reduction;
	std::cout << "SUPER-TP " << _name << " is changed\n\n";
	return *this;
}