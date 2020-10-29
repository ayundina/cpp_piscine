#ifndef INSTRUCTION_DECREMENT_CLASS_H
#define INSTRUCTION_DECREMENT_CLASS_H

#include "a_instruction_class.hpp"

class InstructionDecrement : public AInstruction
{
private:
public:
	InstructionDecrement();
	~InstructionDecrement();

	InstructionDecrement(char &);
	InstructionDecrement(const InstructionDecrement &);
	InstructionDecrement &operator=(const InstructionDecrement &);

	void execute();
};

#endif