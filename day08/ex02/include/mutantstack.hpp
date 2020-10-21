#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>
#include <vector>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	MutantStack();
	~MutantStack();

	MutantStack(const MutantStack &);
	MutantStack<T> &operator=(const MutantStack &);

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin();
	iterator end();
};

#endif
