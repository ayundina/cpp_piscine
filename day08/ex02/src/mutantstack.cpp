#include "../include/mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &s) : std::stack<T>(s) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &rhs)
{
	if (this != &rhs)
		this->c = rhs.c;
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

template class MutantStack<int>;
