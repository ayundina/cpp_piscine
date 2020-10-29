#ifndef INSTRUCTION_START_LOOP_CLASS_H
#define INSTRUCTION_START_LOOP_CLASS_H

#include "a_instruction_class.hpp"

class InstructionStartLoop : public AInstruction
{
private:
public:
	InstructionStartLoop();
	~InstructionStartLoop();

	InstructionStartLoop(char &);
	InstructionStartLoop(const InstructionStartLoop &);
	InstructionStartLoop &operator=(const InstructionStartLoop &);

	void execute();
};

#endif