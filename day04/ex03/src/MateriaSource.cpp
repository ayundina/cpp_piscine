#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		_materia[i] = nullptr;
	}
	return;
}

MateriaSource::MateriaSource(const AMateria &m)
{
	_materia[0] = m.clone();
	for (int i = 1; i < INVENTORY_SIZE; i++)
	{
		_materia[i] = nullptr;
	}
	return;
}

MateriaSource::MateriaSource(const MateriaSource &ms)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (ms._materia[i] != nullptr)
			_materia[i] = ms._materia[i]->clone();
		else
			_materia[i] = nullptr;
	}
	return;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ms)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (ms._materia[i] != nullptr)
			_materia[i] = ms._materia[i]->clone();
		else
			_materia[i] = nullptr;
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (_materia[i] != nullptr)
		{
			delete _materia[i];
			_materia[i] = nullptr;
		}
	}
	return;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (_materia[i] == nullptr)
		{
			_materia[i] = m;
			break;
		}
	}
	return;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (type.compare(_materia[i]->getType()) == 0)
		{
			return _materia[i]->clone();
		}
	}
	return nullptr;
}
