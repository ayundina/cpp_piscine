#ifndef INSTRUCTION_END_LOOP_CLASS_H
#define INSTRUCTION_END_LOOP_CLASS_H

#include "a_instruction_class.hpp"

class InstructionEndLoop : public AInstruction
{
private:
public:
	InstructionEndLoop();
	~InstructionEndLoop();

	InstructionEndLoop(char &);
	InstructionEndLoop(const InstructionEndLoop &);
	InstructionEndLoop &operator=(const InstructionEndLoop &);

	void execute();
};

#endif