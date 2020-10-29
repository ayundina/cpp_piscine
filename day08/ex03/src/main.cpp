/*

Instructions:

Mindopen == Mindfuck with different symbols for the same instructions

1.	Open a file with Mindopen code
2.	Create queue of instructions objects based on the file
			- each instruction has it's own class
			- each instruction has an execute method
			- add interface to manipulate and store instructions
3.	Close the file
4.	Execute the queue


Brainfuck instructions:

>	increment the data pointer (to point to the next cell to the right).
<	decrement the data pointer (to point to the next cell to the left).
+	increment (increase by one) the byte at the data pointer.
-	decrement (decrease by one) the byte at the data pointer.
.	output the byte at the data pointer.
,	accept one byte of input, storing its value in the byte at the data pointer.
[	if the byte at the data pointer is zero, then instead of moving the instruction pointer forward to the next command, jump it forward to the command after the matching ] command.
]	if the byte at the data pointer is nonzero, then instead of moving the instruction pointer forward to the next command, jump it back to the command after the matching [ command.


Mindopen instructions:

+ - next cell
- - previous cell
^ - increment value
_ - decrement value
\ - output
g - write value to the cell
( - start loop
) - end loop

Hello_world.mf
++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.

Hello_world.mo
^^^^^^^^(+^^^^(+^^+^^^+^^^+^----_)+^+^+_++^(-)-_)++\+___\^^^^^^^\\^^^\++\-_\-\^^^\______\________\++^\+^^\

*/

#include <iostream>
#include "../include/queue_class.hpp"
#include "../include/file_class.hpp"

#include <sys/resource.h>
#include <sys/time.h>

void displayUsage()
{
	std::cout << "./mindopen mindopen_program.mo\n";
	return;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		displayUsage();
		return 0;
	}
	try
	{
		File file(argv[1]);
		char c;
		Queue queue;
		while (file.readChar(c))
		{
			queue.addToQueue(c);
		}
		queue.setAndCheck();
		queue.execute();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
