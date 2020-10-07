#include "../include/Data.hpp"
#include "../include/Random.hpp"

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