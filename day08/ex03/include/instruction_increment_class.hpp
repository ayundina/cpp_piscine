#ifndef INSTRUCTION_INCREMENT_CLASS_H
#define INSTRUCTION_INCREMENT_CLASS_H

#include "a_instruction_class.hpp"

class InstructionIncrement : public AInstruction
{
private:
public:
	InstructionIncrement();
	~InstructionIncrement();

	InstructionIncrement(char &);
	InstructionIncrement(const InstructionIncrement &);
	InstructionIncrement &operator=(const InstructionIncrement &);

	void execute();
};

#endif