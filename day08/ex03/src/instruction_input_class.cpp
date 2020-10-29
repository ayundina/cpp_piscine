#include "../include/instruction_input_class.hpp"

InstructionInput::InstructionInput()
{
	_instruction = INPUT;
	return;
}

InstructionInput::~InstructionInput()
{
	return;
}

InstructionInput::InstructionInput(char &instruction)
{
	_instruction = instruction;
	return;
}

InstructionInput::InstructionInput(const InstructionInput &i)
{
	_instruction = i._instruction;
	return;
}

InstructionInput &InstructionInput::operator=(const InstructionInput &i)
{
	_instruction = i._instruction;
	return *this;
}

void InstructionInput::execute()
{
	char c = 0;

	std::cout << "Enter char value: ";
	std::cin >> c;
	_tape[_i] = c;
	return;
}
