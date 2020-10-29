#ifndef INSTRUCTION_NEXT_CLASS_H
#define INSTRUCTION_NEXT_CLASS_H

#include "a_instruction_class.hpp"

class InstructionNext : public AInstruction
{
private:
public:
	InstructionNext();
	~InstructionNext();

	InstructionNext(char &);
	InstructionNext(const InstructionNext &);
	InstructionNext &operator=(const InstructionNext &);

	void execute();

	class OutOfTapeBoundException : public std::exception
	{
		const char *what() const throw();
	};
};

#endif