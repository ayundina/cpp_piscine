#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

#define INVENTORY_SIZE 4

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_materia[INVENTORY_SIZE];

public:
	MateriaSource();
	MateriaSource(const AMateria &m);
	MateriaSource(const MateriaSource &ms);

	MateriaSource &operator=(const MateriaSource &ms);

	~MateriaSource();

	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);
};

#endif
