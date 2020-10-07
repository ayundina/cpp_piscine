#include "../include/Data.hpp"
#include "../include/Random.hpp"
#include <cstring>

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

	std::cout << "\ngenerated data:\n";
	std::cout << serialized->s1 << "\n";
	std::cout << serialized->n << "\n";
	std::cout << serialized->s2 << "\n";

	// std::string s1 = random.generateString(8);
	// int n = random.generateInt();
	// std::string s2 = random.generateString(8);
	// std::cout << "generated data:\n"
	// 					<< s1 << "\n"
	// 					<< n << "\n"
	// 					<< s2 << "\n";

	// char *serialized = new char[sizeof(s1) + sizeof(n) + sizeof(s2)];
	// memcpy(serialized, reinterpret_cast<void *>(&s1), sizeof(s1));
	// std::cout << serialized << "\n";
	// memcpy(&serialized[sizeof(s1)], reinterpret_cast<void *>(&n), sizeof(n));
	// std::cout << serialized << "\n";
	// memcpy(&serialized[sizeof(s1) + sizeof(n)], reinterpret_cast<void *>(&s2), sizeof(s2));
	// std::cout << serialized << "\n";
	return reinterpret_cast<void *>(serialized);
}

Data *deserialize(void *raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	void *raw = serialize();
	Data *data = deserialize(raw);

	std::cout << "\ndeserialized data: \n";
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	delete data;
	return 0;
}
