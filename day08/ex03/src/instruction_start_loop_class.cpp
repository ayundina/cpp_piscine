#include "../include/instruction_start_loop_class.hpp"

InstructionStartLoop::InstructionStartLoop()
{
	_instruction = START_LOOP;
	return;
}

InstructionStartLoop::~InstructionStartLoop()
{
	return;
}

InstructionStartLoop::InstructionStartLoop(char &instruction)
{
	_instruction = instruction;
	return;
}

InstructionStartLoop::InstructionStartLoop(const InstructionStartLoop &i)
{
	_instruction = i._instruction;
	_paired_bracket = i._paired_bracket;
	return;
}

InstructionStartLoop &InstructionStartLoop::operator=(const InstructionStartLoop &i)
{
	_instruction = i._instruction;
	_paired_bracket = i._paired_bracket;
	return *this;
}

void InstructionStartLoop::execute()
{
	return;
}
