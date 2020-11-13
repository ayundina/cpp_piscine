#ifndef CLASSCAT_H
#define CLASSCAT_H

#include <iostream>
#include "ClassFile.hpp"

class Cat
{
private:
public:
	Cat();
	~Cat();

	void file(int argc, char **argv);
	void standardInput();
};

#endif
