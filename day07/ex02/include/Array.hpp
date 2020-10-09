#ifndef ARRAY_H
#define ARRAY_H

#include <exception>
#include <iostream>

template <typename T>
class Array
{
private:
	T *_array;
	int _size;

public:
	Array();
	Array(const unsigned int &);
	Array(const Array &);
	~Array();

	Array &operator=(const Array &);
	T &operator[](const int &);
	int size() const;
	void print() const;

	class OutOfLimitException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif
