/*

ClassHuman functions: 
first three will simply output something to the
the last one will have to call the appropriate action on the appropriate target.

You must use an array of pointers to members to select which function to call:
using multiple if statements, or switch statements, is forbidden.

*/

#include "../include/Human.hpp"

int main(void)
{
	Human human;
	human.action("0", "Richard");
	human.action("1", "aircrafts");
	human.action("2", "neighbour");
	human.action("3", "neighbour");
	return 0;
}
