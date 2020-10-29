#include "../include/instruction_output_class.hpp"

InstructionOutput::InstructionOutput()
{
	_instruction = OUTPUT;
	return;
}

InstructionOutput::~InstructionOutput()
{
	return;
}

InstructionOutput::InstructionOutput(char &instruction)
{
	_instruction = instruction;
	return;
}

InstructionOutput::InstructionOutput(const InstructionOutput &i)
{
	_instruction = i._instruction;
	return;
}

InstructionOutput &InstructionOutput::operator=(const InstructionOutput &i)
{
	_instruction = i._instruction;
	return *this;
}

void InstructionOutput::execute()
{
	std::cout << _tape[_i];
	return;
}
