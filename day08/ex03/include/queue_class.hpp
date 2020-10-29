#ifndef QUEUE_CLASS_H
#define QUEUE_CLASS_H

#include "../include/a_instruction_class.hpp"
#include "../include/instruction_next_class.hpp"
#include "../include/instruction_previous_class.hpp"
#include "../include/instruction_increment_class.hpp"
#include "../include/instruction_decrement_class.hpp"
#include "../include/instruction_output_class.hpp"
#include "../include/instruction_input_class.hpp"
#include "../include/instruction_start_loop_class.hpp"
#include "../include/instruction_end_loop_class.hpp"

#include <vector>
#include <stack>
#include <iostream>
#include <map>

class Queue
{
private:
	std::vector<AInstruction *> _queue;
	const std::string _valid_instructions;
	char _instruction;
	bool _comment;

	int _size;
	int _instruction_counter;
	std::vector<int> _stack_open_bracket;

	typedef AInstruction *(Queue::*fptrType)();
	std::map<char, fptrType> _fptr;

	void pairBrackets();
	void loop();

	Queue(const std::vector<AInstruction *> &);
	Queue(const Queue &);
	Queue &operator=(const Queue &);

public:
	Queue();
	~Queue();

	void addToQueue(const char &instruction);
	bool validInstruction();

	template <class T>
	AInstruction *create();
	void printInstructions();
	void printData();
	void setAndCheck();
	void execute();

	class NoInstructionToExecuteException : public std::exception
	{
		const char *what() const throw();
	};

	class NoMatchingClosingBracketException : public std::exception
	{
		const char *what() const throw();
	};

	class NoMatchingOpenBracketException : public std::exception
	{
		const char *what() const throw();
	};
};

#endif