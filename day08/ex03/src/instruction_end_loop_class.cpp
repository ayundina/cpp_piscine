#include "../include/instruction_end_loop_class.hpp"

InstructionEndLoop::InstructionEndLoop()
{
	_instruction = END_LOOP;
	return;
}

InstructionEndLoop::~InstructionEndLoop()
{
	return;
}

InstructionEndLoop::InstructionEndLoop(char &instruction)
{
	_instruction = instruction;
	return;
}

InstructionEndLoop::InstructionEndLoop(const InstructionEndLoop &i)
{
	_instruction = i._instruction;
	_paired_bracket = i._paired_bracket;
	return;
}

InstructionEndLoop &InstructionEndLoop::operator=(const InstructionEndLoop &i)
{
	_instruction = i._instruction;
	_paired_bracket = i._paired_bracket;
	return *this;
}

void InstructionEndLoop::execute()
{
	return;
}
