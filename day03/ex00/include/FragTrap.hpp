#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>

#define TYPES 6

class FragTrap
{
private:
	short int _hit_points;
	short int _max_hit_points;
	short int _energy_points;
	short int _max_energy_points;
	short int _level;
	std::string _name;
	short int _melee_attack_damage;
	short int _ranged_attack_damage;
	short int _armor_damage_reduction;

public:
	FragTrap(std::string name);
	FragTrap(const FragTrap &ft);
	FragTrap(void);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &ft);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void riflesAttack(std::string const &target);
	void cryoAttack(std::string const &target);
	void explosiveAttack(std::string const &target);
	void flameAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	const std::string &getName(void) const;
	unsigned int getRangeDamage(void) const;
	unsigned int getMeleeDamage(void) const;
	int getHitPoints(void) const;
	int vaulthunterDotExe(std::string const &target);
	bool enoughEnergyPoints(void);
};

#endif