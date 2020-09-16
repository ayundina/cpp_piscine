#include "../include/Character.hpp"

Character::Character()
{
	_name = "no_name";
	for (int i = 0; i <= MAX_MATERIA; i++)
	{
		_materia[i] = nullptr;
	}
	return;
}

Character::Character(const std::string &name)
{
	_name = name;
	for (int i = 0; i <= MAX_MATERIA; i++)
	{
		_materia[i] = nullptr;
	}
	return;
}

Character::Character(const Character &ch)
{
	_name = ch._name;
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (ch._materia[i] != nullptr)
			_materia[i] = ch._materia[i]->clone();
		else
			_materia[i] = nullptr;
	}
	return;
}

Character &Character::operator=(const Character &ch)
{
	_name = ch._name;
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (ch._materia[i] != nullptr)
			_materia[i] = ch._materia[i]->clone();
		else
			_materia[i] = nullptr;
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (_materia[i] != nullptr)
		{
			delete _materia[i];
			_materia[i] = nullptr;
		}
	}
	return;
}

const std::string &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	bool equipped = false;

	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (_materia[i] == m)
		{
			if (equipped)
			{
				_materia[i] = nullptr;
			}
			break;
		}
		if (_materia[i] == nullptr && !equipped)
		{
			_materia[i] = m;
			equipped = true;
		}
	}
	return;
}

void Character::unequip(int idx)
{
	if (idx < MAX_MATERIA)
	{
		_materia[idx] = nullptr;
	}
	return;
}

void Character::use(int idx, ICharacter &target)
{
	if ((idx < MAX_MATERIA && _materia[idx] == nullptr) || idx >= MAX_MATERIA)
	{
		return;
	}
	_materia[idx]->use(target);
	return;
}
