/*

ClassHuman functions: 
first three will simply output something to the
the last one will have to call the appropriate action on the appropriate target.

You must use an array of pointers to members to select which function to call:
using multiple if statements, or switch statements, is forbidden.

*/

#include "Human.hpp"

int main(void)
{
	Human human;
	human.action("melee", "Richard");
	human.action("range", "target");
	human.action("shout", "a neighbour");
	human.action("kick", "a neighbour");
	human.action("hug", "a neighbour");
	return 0;
}
