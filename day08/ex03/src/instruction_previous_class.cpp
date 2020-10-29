#include "../include/instruction_previous_class.hpp"

InstructionPrevious::InstructionPrevious()
{
	_instruction = PREV_CELL;
	return;
}

InstructionPrevious::~InstructionPrevious()
{
	return;
}

InstructionPrevious::InstructionPrevious(char &instruction)
{
	_instruction = instruction;
	return;
}

InstructionPrevious::InstructionPrevious(const InstructionPrevious &i)
{
	_instruction = i._instruction;
	return;
}

InstructionPrevious &InstructionPrevious::operator=(const InstructionPrevious &i)
{
	_instruction = i._instruction;
	return *this;
}

void InstructionPrevious::execute()
{
	if (_i == 0)
		return;
	_i -= 1;
	return;
}
