#include "../include/Data.hpp"
#include "../include/Random.hpp"

// reinterpret_cast for changing the meaning of bit patterns (§11.5.2)

// reinterpret_cast handles conversions between unrelated types
// such as an integer to a pointer or
// a pointer to an unrelated pointer type (§iso.5.2.10).

void *serialize()
{
	Random random;

	Data *serialized = new Data;
	serialized->s1 = random.generateString(8);
	serialized->n = random.generateInt();
	serialized->s2 = random.generateString(8);
	return static_cast<void *>(serialized);
}

Data *deserialize(void *raw)
{
	return static_cast<Data *>(raw);
}

int main()
{
	void *raw = serialize();
	Data *data = deserialize(raw);

	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	delete data;
	return 0;
}
