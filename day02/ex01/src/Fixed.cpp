#include <bitset>
#include "../include/Fixed.hpp"

Fixed::Fixed(void)
{
	_fixed_point_value = 0;
	std::cout << "Default constructor called\n";
	return;
}

Fixed::Fixed(const Fixed &fixed)
{
	_fixed_point_value = fixed._fixed_point_value;
	std::cout << "Copy constructor called\n";
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
	return;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	_fixed_point_value = fixed._fixed_point_value;
	std::cout << "Assignment operator called\n";
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "gerRawBits function member called\n";
	return _fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
	_fixed_point_value = raw;
	std::cout << "setRawBits function member called\n";
	return;
}
