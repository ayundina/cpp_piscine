#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>

class Span
{
private:
	unsigned int _size;
	std::vector<int> _container;

public:
	Span(const unsigned int &);
	~Span();

	void addNumber(const int &n);
	void addRange(const int *begin, const int *end);
	void printContent();
	int shortestSpan();
	int longestSpan();

	class NoSpaceException : public std::exception
	{
		const char *what() const throw();
	};

	class NoSpanToFindException : public std::exception
	{
		const char *what() const throw();
	};
};

#endif