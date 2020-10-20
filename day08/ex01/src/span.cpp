#include "../include/span.hpp"

Span::Span(const unsigned int &s)
{
	_size = s;
	return;
}

Span::~Span()
{
	return;
}

void Span::addNumber(const int &n)
{
	if (_container.size() == _size)
	{
		throw NoSpaceException();
	}
	_container.push_back(n);
	std::sort(_container.begin(), _container.end());
	return;
}

void Span::addRange(const int *begin, const int *end)
{
	if (end - begin > _size)
		throw NoSpaceException();
	_container.assign(begin, end);
	std::sort(_container.begin(), _container.end());
	return;
}

void Span::printContent()
{
	for (unsigned int i = 0; i < _container.size(); i++)
	{
		std::cout << _container[i] << "-";
	}
	std::cout << "\n";
	std::cout << "size: " << _container.size() << "\n";
}

int Span::shortestSpan()
{
	unsigned int current_size = _container.size();
	if (current_size == 0 || current_size == 1)
	{
		throw NoSpanToFindException();
	}

	int ret = INT32_MAX;
	int tmp = 0;
	for (unsigned int i = 0; i < current_size; i++)
	{
		if (i + 1 < current_size)
			tmp = _container[i + 1] - _container[i];
		if (tmp < ret)
			ret = tmp;
	}
	return ret;
}

int Span::longestSpan()
{
	unsigned int current_size = _container.size();
	if (current_size == 0 || current_size == 1)
	{
		throw NoSpanToFindException();
	}
	return _container[current_size - 1] - _container[0];
}

const char *Span::NoSpaceException::what() const throw()
{
	return "Error: no more space";
}

const char *Span::NoSpanToFindException::what() const throw()
{
	return "Error: no span to find";
}
