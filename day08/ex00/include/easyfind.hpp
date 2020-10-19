#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <exception>
#include <typeinfo>
#include <vector>
#include <deque>
#include <list>

template <typename T>
void easyfind(T &container, const int &to_find);

template <typename T>
void searchContainer();

class ElementIsNotFoundException : public std::exception
{
public:
	const char *what() const throw();
};

#endif
