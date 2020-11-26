#include "Pony.hpp"

void doSomeStuff(Pony *pony)
{
	pony->eat();
	pony->play();
	pony->love();
	return;
}

void ponyOnTheStack()
{
	Pony stack_pony("Stack Pony", "light brown", "carrot");
	std::cout << "	" << stack_pony.getName() << "'s address is ";
	std::cout << &stack_pony << std::endl;
	doSomeStuff(&stack_pony);
	return;
}

void ponyOnTheHeap()
{
	Pony *heap_pony = new Pony("Heap Pony", "ginger", "pumpkin");
	std::cout << "	" << heap_pony->getName() << "'s address is ";
	std::cout << &heap_pony << std::endl;
	doSomeStuff(heap_pony);
	delete heap_pony;
	return;
}

int main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	std::cout << std::endl;
	return 0;
}
