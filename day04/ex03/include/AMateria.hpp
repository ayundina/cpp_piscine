#ifndef AMATERIA_H
#define AMATERIA_H

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
private:
protected:
	std::string _type;
	unsigned int _xp;

public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &m);

	AMateria &operator=(const AMateria &m);

	virtual ~AMateria();

	const std::string &getType() const;
	unsigned int getXP() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target) = 0;
};

#endif
