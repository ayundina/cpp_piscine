#include "../include/queue_class.hpp"

Queue::Queue()
		: _valid_instructions(VALID_INSTRUCTIONS)
{
	_fptr[NEXT_CELL] = &Queue::create<InstructionNext>;
	_fptr[PREV_CELL] = &Queue::create<InstructionPrevious>;
	_fptr[INCREMENT_VAL] = &Queue::create<InstructionIncrement>;
	_fptr[DECREMENT_VAL] = &Queue::create<InstructionDecrement>;
	_fptr[OUTPUT] = &Queue::create<InstructionOutput>;
	_fptr[INPUT] = &Queue::create<InstructionInput>;
	_fptr[START_LOOP] = &Queue::create<InstructionStartLoop>;
	_fptr[END_LOOP] = &Queue::create<InstructionEndLoop>;
	_comment = false;
	_instruction_counter = -1;
	return;
}

Queue::~Queue()
{
	int size = _queue.size();
	for (int i = 0; i < size; i++)
	{
		delete _queue[i];
	}
	return;
}

Queue::Queue(const std::vector<AInstruction *> &)
{
	return;
}

Queue::Queue(const Queue &)
{
	return;
}

Queue &Queue::operator=(const Queue &)
{
	return *this;
}

bool Queue::validInstruction()
{
	if (_comment != true && _valid_instructions.find(_instruction) != std::string::npos)
	{
		return true;
	}
	if (_instruction == NEW_LINE && _comment == true)
		_comment = false;
	if (_instruction == COMMENT)
		_comment = true;
	return false;
}

void Queue::pairBrackets()
{
	if (_instruction == START_LOOP)
	{
		_stack_open_bracket.push_back(_instruction_counter);
		return;
	}
	if (_instruction == END_LOOP)
	{
		if (_stack_open_bracket.size() == 0)
			throw NoMatchingOpenBracketException();
		_queue[_instruction_counter]->setBracketPair(_stack_open_bracket.back());
		_queue[_stack_open_bracket.back()]->setBracketPair(_instruction_counter);
		_stack_open_bracket.pop_back();
	}
	return;
}

void Queue::addToQueue(const char &instruction)
{
	_instruction = instruction;
	if (!validInstruction())
		return;
	fptrType create_instruction = _fptr[_instruction];
	AInstruction *i = (this->*create_instruction)();
	_queue.push_back(i);
	_instruction_counter += 1;
	pairBrackets();
	return;
}

template <class T>
AInstruction *Queue::create()
{
	AInstruction *i = new T(_instruction);
	return i;
}

void Queue::printInstructions()
{
	int size = _queue.size();
	for (int i = 0; i < size; i++)
	{
		_queue[i]->printInstruction();
	}
	std::cout << "\n";
	return;
}

void Queue::printData()
{
	if (_queue.size() == 0)
		return;
	_queue[0]->printTape();
	return;
}

void Queue::setAndCheck()
{
	_size = _queue.size();
	_instruction_counter = 0;
	_queue[0]->clearTape();
	_queue[0]->resetPointer();

	if (_size == 0)
		throw NoInstructionToExecuteException();
	if (_stack_open_bracket.size() != 0)
		throw NoMatchingClosingBracketException();
	return;
}

void Queue::loop()
{
	if (!_queue[_instruction_counter]->isLoop()) // no loop, just an instruction
		return;

	if (_queue[_instruction_counter]->isRepeatLoop() || _queue[_instruction_counter]->isSkipLoop())
	{
		_instruction_counter = _queue[_instruction_counter]->getPairedBracket();
		return;
	}
	return;
}

void Queue::execute()
{
	for (; _instruction_counter < _size; _instruction_counter++)
	{
		loop();
		_queue[_instruction_counter]->execute();
	}
	return;
}

const char *Queue::NoInstructionToExecuteException::what() const throw()
{
	return "Error: no instructions were provided for execution";
}

const char *Queue::NoMatchingClosingBracketException::what() const throw()
{
	return "Error: no matching closing bracket";
}

const char *Queue::NoMatchingOpenBracketException::what() const throw()
{
	return "Error: no matching open bracket";
}
