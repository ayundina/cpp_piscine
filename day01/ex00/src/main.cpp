#include "../include/Pony.hpp"

void doSomeStuff(Pony *pony)
{
  pony->eat();
  pony->play();
  pony->love();
  return;
}

void ponyOnTheStack(void)
{
  Pony stack_pony("Stack Pony", "light brown", "carrot");
  std::cout << "\t" << stack_pony._name << "'s address is ";
  std::cout << &stack_pony._name << "\n";
  doSomeStuff(&stack_pony);
  return;
}

void ponyOnTheHeap(void)
{
  Pony *heap_pony = new Pony("Heap Pony", "ginger", "pumpkin");
  std::cout << "\t" << heap_pony->_name << "'s address is ";
  std::cout << &heap_pony->_name << "\n";
  doSomeStuff(heap_pony);
  delete heap_pony;
  return;
}

int main(void)
{
  ponyOnTheStack();
  ponyOnTheHeap();
  std::cout << "\n";
  return 0;
}