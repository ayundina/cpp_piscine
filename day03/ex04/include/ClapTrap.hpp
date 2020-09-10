#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#define TYPES 5

#include <iostream>

class ClapTrap
{
private:
protected:
	short int _hit_points;
	short int _max_hit_points;
	short int _energy_points;
	short int _max_energy_points;
	short int _level;
	std::string _name;
	short int _melee_attack_damage;
	short int _ranged_attack_damage;
	short int _armor_damage_reduction;

	int randomNum(void);

public:
	ClapTrap(void);
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &ft);
	~ClapTrap(void);

	ClapTrap &operator=(const ClapTrap &ct);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	const std::string &getName(void) const;
	unsigned int getRangeDamage(void) const;
	unsigned int getMeleeDamage(void) const;
	int getHitPoints(void) const;
	bool enoughEnergyPoints(void);
};

#endif