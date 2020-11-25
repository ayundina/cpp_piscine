#include "Human.hpp"

int main()
{
	Human human;
	human.action("melee", "Richard");
	human.action("range", "target");
	human.action("shout", "a neighbour");
	human.action("kick", "a neighbour");
	human.action("hug", "a neighbour");
	return 0;
}
