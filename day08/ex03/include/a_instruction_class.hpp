#ifndef A_INSTRUCTION_CLASS_H
#define A_INSTRUCTION_CLASS_H

#include <iostream>
#include <cstring>
#include <climits>
#include <exception>

#define SIZE 10000

// mindopen commands:

#define NEXT_CELL '+'
#define PREV_CELL '-'
#define INCREMENT_VAL '^'
#define DECREMENT_VAL '_'
#define OUTPUT '\\'
#define INPUT 'g'
#define START_LOOP '('
#define END_LOOP ')'
#define COMMENT '#'
#define NEW_LINE '\n'
#define VALID_INSTRUCTIONS "+-^_\\g()"

// brainfuck commands:

// #define NEXT_CELL '>'
// #define PREV_CELL '<'
// #define INCREMENT_VAL '+'
// #define DECREMENT_VAL '-'
// #define OUTPUT '.'
// #define INPUT ','
// #define START_LOOP '['
// #define END_LOOP ']'
// #define COMMENT '#'
// #define NEW_LINE '\n'
// #define VALID_INSTRUCTIONS "><+-.,[]"

class AInstruction
{
private:
protected:
	char _instruction;
	static char _tape[SIZE];
	static unsigned int _i;

	int _paired_bracket;

public:
	AInstruction();
	virtual ~AInstruction();

	AInstruction(char &);
	AInstruction(const AInstruction &);
	AInstruction &operator=(const AInstruction &);

	void setBracketPair(const int &);
	int getPairedBracket();

	void clearTape();
	void resetPointer();

	void printInstruction();
	void printTape();

	bool isLoop();			 // '(' || ')'
	bool isEnterLoop();	 // '(' && _tape[_i] != 0
	bool isEndLoop();		 // ')' && _tape[_i] == 0
	bool isRepeatLoop(); // ')' && _tape[_i] != 0
	bool isSkipLoop();	 // '(' && _tape[_i] == 0

	virtual void execute() = 0;
};

#endif