#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_level = 1;
	_name = name;
	_melee_attack_damage = 20;
	_ranged_attack_damage = 15;
	_armor_damage_reduction = 3;
	std::cout << "SC4V-TP " << _name << " is constructed\n\n";
	return;
}

ScavTrap::ScavTrap(const ScavTrap &st)
{
	_hit_points = st._hit_points;
	_max_hit_points = st._max_hit_points;
	_energy_points = st._energy_points;
	_max_energy_points = st._max_energy_points;
	_level = st._level;
	_name = st._name + "_copy";
	_melee_attack_damage = st._melee_attack_damage;
	_ranged_attack_damage = st._ranged_attack_damage;
	_armor_damage_reduction = st._armor_damage_reduction;
	std::cout << "SC4V-TP " << _name << " is constructed\n\n";
	return;
}

ScavTrap::ScavTrap(void)
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
	std::cout << "SC4V-TP " << _name << " is constructed\n\n";
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SC4V-TP " << _name << " is deactivated\n\n";
	return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &st)
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
	std::cout << "SC4V-TP " << _name << " is changed\n\n";
	return *this;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << _name << " says: \"I expect you to die!\"\n";
	std::cout << target << " was shot with " << _ranged_attack_damage;
	std::cout << " points damage\n\n";
	return;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SC4V-TP " << _name << " says: \"Take that!\"\n";
	std::cout << target << " was punched with ";
	std::cout << _melee_attack_damage << " points damage\n\n";
	return;
}

void ScavTrap::rubikChallenge(std::string const &target)
{
	std::cout << "SC4V-TP " << _name << " says: \"Oh yeah? Well, uh... yeah... Rubik\"\n";
	std::cout << target << " must solve rubik's cube in under 25 moves\n\n";
	return;
}

void ScavTrap::tongueTwisterChallenge(std::string const &target)
{
	std::cout << "SC4V-TP " << _name << " says: \"How can a clam cram in a clean cream can?\"\n";
	std::cout << target << " must repeat\n\n";
	return;
}

void ScavTrap::beanBoozeledChallenge(std::string const &target)
{
	std::cout << "SC4V-TP " << _name << " says: \"Time to melt some faces.\"\n";
	std::cout << target << " must eat one bean from BeanBoozled Mystery Set ";
	std::cout << "without showing the taste on his face\n\n";
	return;
}

void ScavTrap::artHistoryChallenge(std::string const &target)
{
	std::cout << "SC4V-TP " << _name << " says: \"Let's get this pARTy stARTed!\"\n";
	std::cout << target << " must unswer: was Van Gogh killed or suisadal?\n\n";
	return;
}

void ScavTrap::favorChallenge(std::string const &target)
{
	std::cout << "SC4V-TP " << _name << " says: \"This time it'll be awesome, I promise!\"\n";
	std::cout << target << " must share energy points with " << _name << "\n\n";
	return;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	float damage_reduction = (float)_armor_damage_reduction;

	damage_reduction = damage_reduction / 100;
	damage_reduction = amount * damage_reduction;
	int damage = (int)amount - damage_reduction;

	std::cout << "SC4V-TP " << _name << " says \"Robot down!\"\n";
	std::cout << "SC4V-TP " << _name << " damaged by " << damage << " points/";
	std::cout << _hit_points << " hit points\n";
	_hit_points = (damage > _hit_points) ? 0 : _hit_points - damage;

	std::cout << "SC4V-TP " << _name << " left with " << _hit_points << "/";
	std::cout << _max_hit_points << "\n\n";
	return;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	int repair = ((int)amount > _max_hit_points - _hit_points) ? _max_hit_points - _hit_points : (int)amount;

	std::cout << "SC4V-TP " << _name << " was repaired by ";
	std::cout << repair << " points/" << _hit_points << " hit points\n";
	_hit_points += repair;

	std::cout << "SC4V-TP " << _name << " has " << _hit_points << "/";
	std::cout << _max_hit_points << "\n";
	std::cout << "SC4V-TP " << _name << " says \"You're the wub to my dub!\"\n\n";
	return;
}

const std::string &ScavTrap::getName(void) const
{
	return _name;
}

unsigned int ScavTrap::getRangeDamage(void) const
{
	return _ranged_attack_damage;
}

unsigned int ScavTrap::getMeleeDamage(void) const
{
	return _melee_attack_damage;
}

int ScavTrap::getHitPoints(void) const
{
	return _hit_points;
}

bool ScavTrap::enoughEnergyPoints(void)
{
	int cost = 10;
	if (_energy_points - cost >= 0)
	{
		_energy_points -= cost;
		return true;
	}
	return false;
}

int ScavTrap::randomNum(void)
{
	static int randomizer = 0;

	randomizer += 1;
	std::srand(std::time(nullptr) + randomizer);
	int random_num = std::rand() % CH_TYPES;
	return random_num;
}

int ScavTrap::challengeNewcomer(std::string const &target)
{
	if (enoughEnergyPoints())
	{
		int difficulty[CH_TYPES] = {30, 20, 15, 45, 70};
		int type = randomNum();

		void (ScavTrap::*challenge[CH_TYPES])(std::string const &target);
		challenge[0] = &ScavTrap::rubikChallenge;
		challenge[1] = &ScavTrap::tongueTwisterChallenge;
		challenge[2] = &ScavTrap::beanBoozeledChallenge;
		challenge[3] = &ScavTrap::artHistoryChallenge;
		challenge[4] = &ScavTrap::favorChallenge;

		(this->*(challenge[type]))(target);
		return difficulty[type];
	}
	std::cout << "SC4V-TP " << _name << " says \"Dangit, I'm out!\"\n";
	std::cout << "Energy points " << _energy_points << "/25\n\n";
	return 0;
}
