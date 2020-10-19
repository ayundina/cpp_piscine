#include "../include/easyfind.hpp"

template <typename T>
void easyfind(T &container, const int &to_find)
{
	typename T::iterator it = std::find(container.begin(), container.end(), to_find);
	if (it == container.end())
	{
		throw ElementIsNotFoundException();
	}
	std::cout << "Found in <" << typeid(container).name() << "> : " << *it << "\n";
	return;
}

template <typename T>
void searchContainer()
{
	T container;
	int arr[] = {7, 6, 5, 4, 3, 2, 1};
	container.assign(arr, arr + 7);
	easyfind<T>(container, 5);
	return;
}

const char *ElementIsNotFoundException::what() const throw()
{
	return "Error: element is not found";
}

template void searchContainer<std::vector<int> >();
template void searchContainer<std::deque<int> >();
template void searchContainer<std::list<int> >();
template void easyfind<std::vector<int> >(std::vector<int> &container, const int &to_find);
template void easyfind<std::deque<int> >(std::deque<int> &container, const int &to_find);
template void easyfind<std::list<int> >(std::list<int> &container, const int &to_find);
