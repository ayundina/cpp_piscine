#include "../include/Sorcerer.hpp"
#include <fstream>

void introduceIntoFile(const Sorcerer &s, const Victim &v, const Peon &p)
{
	std::ofstream file;

	file.open("polymorph.intro");
	if (file.is_open())
	{
		file << s;
		file << v;
		file << p;
	}
	return;
}

void extendedSorcererTest(void)
{
	std::cout << "\n";

	Sorcerer leo("Leo", "the Grandmaster");
	Sorcerer vic("Victor", "the Legendary");
	Sorcerer leo_vic_copy(leo);

	leo_vic_copy = vic;

	std::cout << "\n";
	return;
}

void extendedVictimTest(void)
{
	std::cout << "\n";

	Victim leo("Leo");
	Victim vic("Victor");
	Victim leo_vic_copy(leo);

	leo_vic_copy = vic;

	std::cout << "\n";
	return;
}

void extendedPeonTest(void)
{
	std::cout << "\n";

	Peon peo("Peo");
	Peon pic("Pictor");
	Peon peo_pic_copy(peo);

	peo_pic_copy = pic;

	std::cout << "\n";
	return;
}

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << "\n";

	introduceIntoFile(robert, jim, joe);
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	// extendedSorcererTest();
	// extendedVictimTest();
	extendedPeonTest();
	std::cout << "\n";
	return 0;
}