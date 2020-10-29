#ifndef INSTRUCTION_PREVIOUS_CLASS_H
#define INSTRUCTION_PREVIOUS_CLASS_H

#include "a_instruction_class.hpp"

class InstructionPrevious : public AInstruction
{
private:
public:
	InstructionPrevious();
	~InstructionPrevious();

	InstructionPrevious(char &);
	InstructionPrevious(const InstructionPrevious &);
	InstructionPrevious &operator=(const InstructionPrevious &);

	void execute();
};

#endif