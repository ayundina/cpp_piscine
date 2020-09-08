#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
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
	std::cout << "CL4P-TP " << _name << " is created\n\n";
	return;
}

ClapTrap::ClapTrap(std::string name)
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
	std::cout << "CL4P-TP " << _name << " is created\n\n";
	return;
}

ClapTrap::ClapTrap(const ClapTrap &ft)
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
	std::cout << "CL4P-TP " << _name << " is created\n\n";
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "CL4P-TP " << _name << " is deactivated\n\n";
	return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ct)
{
	_hit_points = ct._hit_points;
	_max_hit_points = ct._max_hit_points;
	_energy_points = ct._energy_points;
	_max_energy_points = ct._max_energy_points;
	_level = ct._level;
	_name = _name + "=" + ct._name;
	_melee_attack_damage = ct._melee_attack_damage;
	_ranged_attack_damage = ct._ranged_attack_damage;
	_armor_damage_reduction = ct._armor_damage_reduction;
	std::cout << "CL4P-TP " << _name << " is changed\n\n";
	return *this;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "CL4P-TP " << _name << " says: \"I expect you to die!\"\n";
	std::cout << target << " was shot with " << _ranged_attack_damage;
	std::cout << " points damage\n\n";
	return;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "CL4P-TP " << _name << " says: \"Take that!\"\n";
	std::cout << target << " was punched with ";
	std::cout << _melee_attack_damage << " points damage\n\n";
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	float damage_reduction = (float)_armor_damage_reduction;

	damage_reduction = damage_reduction / 100;
	damage_reduction = amount * damage_reduction;
	int damage = (int)amount - damage_reduction;

	std::cout << "CL4P-TP " << _name << " says \"Robot down!\"\n";
	std::cout << "CL4P-TP " << _name << " damaged by " << damage << " points/";
	std::cout << _hit_points << " hit points\n";
	_hit_points = (damage > _hit_points) ? 0 : _hit_points - damage;

	std::cout << "CL4P-TP " << _name << " left with " << _hit_points << "/";
	std::cout << _max_hit_points << "\n\n";
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int repair = ((int)amount > _max_hit_points - _hit_points) ? _max_hit_points - _hit_points : (int)amount;

	std::cout << "CL4P-TP " << _name << " was repaired by ";
	std::cout << repair << " points/" << _hit_points << " hit points\n";
	_hit_points += repair;

	std::cout << "CL4P-TP " << _name << " has " << _hit_points << "/";
	std::cout << _max_hit_points << "\n";
	std::cout << "CL4P-TP " << _name << " says \"You're the wub to my dub!\"\n\n";
	return;
}

const std::string &ClapTrap::getName(void) const
{
	return _name;
}

unsigned int ClapTrap::getRangeDamage(void) const
{
	return _ranged_attack_damage;
}

unsigned int ClapTrap::getMeleeDamage(void) const
{
	return _melee_attack_damage;
}

int ClapTrap::getHitPoints(void) const
{
	return _hit_points;
}

bool ClapTrap::enoughEnergyPoints(void)
{
	int cost = 10;
	if (_energy_points - cost >= 0)
	{
		_energy_points -= cost;
		return true;
	}
	return false;
}

int ClapTrap::randomNum(void)
{
	static int randomizer = 0;

	randomizer += 1;
	std::srand(std::time(nullptr) + randomizer);
	int random_num = std::rand() % TYPES;
	return random_num;
}
