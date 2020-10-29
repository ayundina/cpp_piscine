#include "../include/instruction_decrement_class.hpp"

InstructionDecrement::InstructionDecrement()
{
	_instruction = DECREMENT_VAL;
	return;
}

InstructionDecrement::~InstructionDecrement()
{
	return;
}

InstructionDecrement::InstructionDecrement(char &instruction)
{
	_instruction = instruction;
	return;
}

InstructionDecrement::InstructionDecrement(const InstructionDecrement &i)
{
	_instruction = i._instruction;
	return;
}

InstructionDecrement &InstructionDecrement::operator=(const InstructionDecrement &i)
{
	_instruction = i._instruction;
	return *this;
}

void InstructionDecrement::execute()
{
	if (_tape[_i] <= 0)
	{
		return;
	}
	_tape[_i] -= 1;
	return;
}
