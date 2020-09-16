#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
public:
	Ice();
	Ice(const std::string &type);
	Ice(const Ice &i);

	Ice &operator=(const Ice &i);

	~Ice();

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
