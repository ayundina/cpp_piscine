#include "../include/Random.hpp"

Random::Random()
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	_fraction = 1.0 / (RAND_MAX + 1.0);
	return;
}

Random::Random(const unsigned int &seed)
{
	std::srand(seed);
	_fraction = 1.0 / (RAND_MAX + 1.0);
	return;
}

Random::Random(const Random &r)
{
	_fraction = r._fraction;
	return;
}

Random &Random::operator=(const Random &r)
{
	_fraction = r._fraction;
	return *this;
}

Random::~Random()
{
	return;
}

int Random::randomIntFromRange(int min, int max)
{
	double range = max - min + 1;
	double rand_fraction = std::rand() * _fraction;
	double rand_num = range * rand_fraction;
	int random_num = min + static_cast<int>(rand_num);

	return random_num;
}

std::string Random::generateString(const size_t &size)
{
	char str[size + 1];

	for (size_t i = 0; i < size; i++)
	{
		str[i] = randomIntFromRange(48, 122);
		str[i + 1] = '\0';
	}
	return static_cast<std::string>(str);
}

int Random::generateInt()
{
	int random = randomIntFromRange(0, 1000);
	return random;
}
