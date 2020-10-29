#ifndef INSTRUCTION_OUTPUT_CLASS_H
#define INSTRUCTION_OUTPUT_CLASS_H

#include "a_instruction_class.hpp"

class InstructionOutput : public AInstruction
{
private:
public:
	InstructionOutput();
	~InstructionOutput();

	InstructionOutput(char &);
	InstructionOutput(const InstructionOutput &);
	InstructionOutput &operator=(const InstructionOutput &);

	void execute();
};

#endif