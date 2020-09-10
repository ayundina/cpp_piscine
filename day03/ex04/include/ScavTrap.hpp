#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	void rubikChallenge(std::string const &target);
	void tongueTwisterChallenge(std::string const &target);
	void beanBoozeledChallenge(std::string const &target);
	void artHistoryChallenge(std::string const &target);
	void favorChallenge(std::string const &target);

public:
	ScavTrap(void);
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &st);
	~ScavTrap(void);

	ScavTrap &operator=(const ScavTrap &st);

	int challengeNewcomer(std::string const &target);
};

#endif
