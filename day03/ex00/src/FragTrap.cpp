#include "../include/FragTrap.hpp"

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

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " says: \"In yo' FACE!\"\n";
	std::cout << target << " was shot with " << _ranged_attack_damage;
	std::cout << " points damage\n\n";
	return;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " says: \"Hyah!\"\n";
	std::cout << target << " was punched with ";
	std::cout << _melee_attack_damage << " points damage\n\n";
	return;
}

void FragTrap::riflesAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << _name << " says: \"Get off my lawn!\"\n";
	std::cout << target << " was salted with ";
	std::cout << _melee_attack_damage << " points damage\n\n";
	return;
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

void FragTrap::takeDamage(unsigned int amount)
{
	float damage_reduction = (float)_armor_damage_reduction;

	damage_reduction = damage_reduction / 100;
	damage_reduction = amount * damage_reduction;
	int damage = (int)amount - damage_reduction;

	std::cout << "FR4G-TP " << _name << " says \"This could've gone better!\"\n";
	std::cout << "FR4G-TP " << _name << " damaged by " << damage << " points/";
	std::cout << _hit_points << " hit points\n";
	_hit_points = (damage > _hit_points) ? 0 : _hit_points - damage;

	std::cout << "FR4G-TP " << _name << " left with " << _hit_points << "/";
	std::cout << _max_hit_points << "\n\n";
	return;
}

void FragTrap::beRepaired(unsigned int amount)
{
	int repair = ((int)amount > _max_hit_points - _hit_points) ? _max_hit_points - _hit_points : (int)amount;

	std::cout << "FR4G-TP " << _name << " was repaired by ";
	std::cout << repair << " points/" << _hit_points << " hit points\n";
	_hit_points += repair;

	std::cout << "FR4G-TP " << _name << " has " << _hit_points << "/";
	std::cout << _max_hit_points << "\n";
	std::cout << "FR4G-TP " << _name << " says \"Can I just say... yeehaw.\"\n\n";
	return;
}

const std::string &FragTrap::getName(void) const
{
	return _name;
}

unsigned int FragTrap::getRangeDamage(void) const
{
	return _ranged_attack_damage;
}

unsigned int FragTrap::getMeleeDamage(void) const
{
	return _melee_attack_damage;
}

int FragTrap::getHitPoints(void) const
{
	return _hit_points;
}

bool FragTrap::enoughEnergyPoints(void)
{
	int cost = 25;
	if (_energy_points - cost >= 0)
	{
		_energy_points -= cost;
		return true;
	}
	return false;
}

int randomNum(void)
{
	static int randomizer = 0;

	randomizer += 1;
	std::srand(std::time(nullptr) + randomizer);
	int random_num = std::rand() % TYPES;
	return random_num;
}

int FragTrap::vaulthunterDotExe(std::string const &target)
{
	if (enoughEnergyPoints())
	{
		int damage[TYPES] = {30, 20, 15, 45, 70, 15};
		int type = randomNum();

		void (FragTrap::*attack[TYPES])(std::string const &target);
		attack[0] = &FragTrap::meleeAttack;
		attack[1] = &FragTrap::rangedAttack;
		attack[2] = &FragTrap::riflesAttack;
		attack[3] = &FragTrap::cryoAttack;
		attack[4] = &FragTrap::explosiveAttack;
		attack[5] = &FragTrap::flameAttack;

		(this->*(attack[type]))(target);
		return damage[type];
	}
	std::cout << "Nah, that's a blank shot for " << _name << "\n";
	std::cout << "Energy points " << _energy_points << "/25\n\n";
	return 0;
}