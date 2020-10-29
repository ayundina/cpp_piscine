#include "../include/instruction_next_class.hpp"

InstructionNext::InstructionNext()
{
	_instruction = NEXT_CELL;
	return;
}

InstructionNext::~InstructionNext()
{
	return;
}

InstructionNext::InstructionNext(char &instruction)
{
	_instruction = instruction;
	return;
}

InstructionNext::InstructionNext(const InstructionNext &i)
{
	_instruction = i._instruction;
	return;
}

InstructionNext &InstructionNext::operator=(const InstructionNext &i)
{
	_instruction = i._instruction;
	return *this;
}

void InstructionNext::execute()
{
	if (_i + 1 < SIZE)
	{
		_i += 1;
		return;
	}
	else
	{
		throw OutOfTapeBoundException();
	}
	return;
}

const char *InstructionNext::OutOfTapeBoundException::what() const throw()
{
	return "Error: the tape reached its end";
}
