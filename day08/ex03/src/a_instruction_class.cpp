#include "../include/a_instruction_class.hpp"

AInstruction::AInstruction()
{
	_instruction = 'O';
	_paired_bracket = -1;
	return;
}

AInstruction::~AInstruction()
{
	return;
}

AInstruction::AInstruction(char &instruction)
{
	_instruction = instruction;
	_paired_bracket = -1;
	return;
}

AInstruction::AInstruction(const AInstruction &i)
{
	_instruction = i._instruction;
	_paired_bracket = i._paired_bracket;
	return;
}

AInstruction &AInstruction::operator=(const AInstruction &i)
{
	_instruction = i._instruction;
	_paired_bracket = i._paired_bracket;
	return *this;
}

void AInstruction::setBracketPair(const int &instruction_index)
{
	_paired_bracket = instruction_index;
	return;
}

int AInstruction::getPairedBracket()
{
	return _paired_bracket;
}

void AInstruction::clearTape()
{
	for (int i = 0; i < SIZE; i++)
	{
		_tape[i] = 0;
	}
	return;
}

void AInstruction::resetPointer()
{
	_i = 0;
	return;
}

void AInstruction::printInstruction()
{
	std::cout << _instruction;
	return;
}

void AInstruction::printTape()
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << _tape[i];
	}
	std::cout << "\n";
	return;
}

bool AInstruction::isLoop()
{
	if (_instruction == START_LOOP || _instruction == END_LOOP)
		return true;
	return false;
}

bool AInstruction::isEnterLoop()
{
	if (_instruction == START_LOOP && _tape[_i] != 0)
		return true;
	return false;
}

bool AInstruction::isEndLoop()
{
	if (_instruction == END_LOOP && _tape[_i] == 0)
	{
		return true;
	}
	return false;
}

bool AInstruction::isRepeatLoop()
{
	if (_instruction == END_LOOP && _tape[_i] != 0)
	{
		return true;
	}
	return false;
}

bool AInstruction::isSkipLoop()
{
	if (_instruction == START_LOOP && _tape[_i] == 0)
		return true;
	return false;
}

char AInstruction::_tape[SIZE];
unsigned int AInstruction::_i = 0;