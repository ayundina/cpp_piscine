#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
public:
	Cure();
	Cure(const std::string &type);
	Cure(const Cure &c);

	Cure &operator=(const Cure &c);

	~Cure();

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
