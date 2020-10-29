#ifndef INSTRUCTION_INPUT_CLASS_H
#define INSTRUCTION_INPUT_CLASS_H

#include "a_instruction_class.hpp"

class InstructionInput : public AInstruction
{
private:
public:
	InstructionInput();
	~InstructionInput();

	InstructionInput(char &);
	InstructionInput(const InstructionInput &);
	InstructionInput &operator=(const InstructionInput &);

	void execute();
};

#endif