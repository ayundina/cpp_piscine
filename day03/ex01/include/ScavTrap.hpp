#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>

#define CH_TYPES 5

class ScavTrap
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
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &st);
	ScavTrap(void);
	~ScavTrap(void);

	ScavTrap &operator=(const ScavTrap &st);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void rubikChallenge(std::string const &target);
	void tongueTwisterChallenge(std::string const &target);
	void beanBoozeledChallenge(std::string const &target);
	void artHistoryChallenge(std::string const &target);
	void favorChallenge(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	const std::string &getName(void) const;
	unsigned int getRangeDamage(void) const;
	unsigned int getMeleeDamage(void) const;
	int getHitPoints(void) const;
	int randomNum(void);
	int challengeNewcomer(std::string const &target);
	bool enoughEnergyPoints(void);
};

#endif
