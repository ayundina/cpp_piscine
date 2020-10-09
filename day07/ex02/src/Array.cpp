#include "../include/Array.hpp"

template <typename T>
Array<T>::Array()
{
	_size = 10;
	_array = new T[_size];
	return;
}

template <typename T>
Array<T>::Array(const unsigned int &size)
{
	_size = size;
	_array = new T[_size];
	return;
}

template <typename T>
Array<T>::Array(const Array &a)
{
	_size = a._size;
	_array = new T[_size];
	for (int i = 0; i < _size; i++)
	{
		_array[i] = a._array[i];
	}
	return;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
	return;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &a)
{
	_size = a._size;
	_array = new T[_size];
	for (int i = 0; i < _size; i++)
	{
		_array[i] = a._array[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](const int &index)
{
	if (index < 0 || index > _size)
		throw OutOfLimitException();
	return _array[index];
}

template <typename T>
int Array<T>::size() const
{
	return _size;
}

template <typename T>
void Array<T>::print() const
{
	for (int i = 0; i < _size; i++)
	{
		std::cout << _array[i] << std::endl;
	}
	return;
}

template <typename T>
const char *Array<T>::OutOfLimitException::what() const throw()
{
	return "Error: index is out of the limits";
}

template class Array<int>;
template class Array<std::string>;
