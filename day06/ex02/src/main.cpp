#include "../include/Base.hpp"
#include "../include/Derived.hpp"
#include "../include/Random.hpp"

Base *generate()
{
	static Random r;
	Base *base = nullptr;
	int random = r.randomIntFromRange(0, 2);

	if (random == 0)
	{
		base = new A;
		std::cout << "\nreal type is A\n";
	}
	else if (random == 1)
	{
		base = new B;
		std::cout << "\nreal type is B\n";
	}
	else if (random == 2)
	{
		base = new C;
		std::cout << "\nreal type is C\n";
	}
	return base;
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "identify_from_pointer: A\n";
	if (dynamic_cast<B *>(p))
		std::cout << "identify_from_pointer: B\n";
	if (dynamic_cast<C *>(p))
		std::cout << "identify_from_pointer: C\n";
	return;
}

void identify_from_reference(Base &p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "identify_from_reference: A\n";
	if (dynamic_cast<B *>(&p))
		std::cout << "identify_from_reference: B\n";
	if (dynamic_cast<C *>(&p))
		std::cout << "identify_from_reference: C\n";
	return;
}

int main()
{
	Base *base_a = generate();
	identify_from_pointer(base_a);
	identify_from_reference(*base_a);
	delete base_a;

	Base *base_b = generate();
	identify_from_pointer(base_b);
	identify_from_reference(*base_b);
	delete base_b;

	Base *base_c = generate();
	identify_from_pointer(base_c);
	identify_from_reference(*base_c);
	delete base_c;

	return 0;
}