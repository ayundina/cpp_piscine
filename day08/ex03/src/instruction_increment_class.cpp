#include "../include/instruction_increment_class.hpp"

InstructionIncrement::InstructionIncrement()
{
	_instruction = INCREMENT_VAL;
	return;
}

InstructionIncrement::~InstructionIncrement()
{
	return;
}

InstructionIncrement::InstructionIncrement(char &instruction)
{
	_instruction = instruction;
	return;
}

InstructionIncrement::InstructionIncrement(const InstructionIncrement &i)
{
	_instruction = i._instruction;
	return;
}

InstructionIncrement &InstructionIncrement::operator=(const InstructionIncrement &i)
{
	_instruction = i._instruction;
	return *this;
}

void InstructionIncrement::execute()
{
	if (_tape[_i] == CHAR_MAX)
		return;
	_tape[_i] += 1;
	return;
}
