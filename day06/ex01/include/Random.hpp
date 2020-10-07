#ifndef RANDOM_H
#define RANDOM_H

#include <iostream>
#include <cstdlib>
#include <ctime>

class Random
{
private:
	double _fraction;

	int randomInt(int max, int min);

public:
	Random();
	Random(const unsigned int &seed);
	Random(const Random &);

	Random &operator=(const Random &);

	~Random();

	std::string generateString(const size_t &);
	int generateInt();
};

#endif