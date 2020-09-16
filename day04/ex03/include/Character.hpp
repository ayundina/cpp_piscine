#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"

#define MAX_MATERIA 4

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_materia[MAX_MATERIA];

public:
	Character();
	Character(const std::string &name);
	Character(const Character &ch);

	Character &operator=(const Character &ch);

	~Character();

	const std::string &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
