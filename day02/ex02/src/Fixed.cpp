#include <bitset>
#include "../include/Fixed.hpp"

Fixed::Fixed(void)
{
	_fixed_point_value = 0;
	std::cout << "Default constructor called. _fixed_point_value = ";
	std::cout << _fixed_point_value << "\n";
	return;
}

/*

_fixed_point_value = floating_point_value * (1 << _fraction_bits) 
(where '1<< fraction_int' is a scaling factor,
so if scaling factor = 100, float = 123,45, than fixed = 12345)

In order to convert fixed back to float, divide fixed by scaling factor
floating_point_value = _fixed_point_value / (1 << _fraction_bits)

https://stackoverflow.com/questions/3402702/converting-floating-point-to-32-bit-fixed-point-in-java

*/

Fixed::Fixed(const int int_val)
{
	_fixed_point_value = int_val * (1 << _fraction_bits);
	std::cout << "Int constructor called. _fixed_point_value = ";
	std::cout << _fixed_point_value << "\n";
	return;
}

Fixed::Fixed(const float floating_point_val)
{
	_fixed_point_value = roundf(floating_point_val * (1 << _fraction_bits));
	std::cout << "Float constructor called. _fixed_point_value = ";
	std::cout << _fixed_point_value << "\n";
	return;
}

Fixed::Fixed(const Fixed &fixed)
{
	_fixed_point_value = fixed._fixed_point_value;
	std::cout << "Copy constructor called. _fixed_point_value = ";
	std::cout << _fixed_point_value << "\n";
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
	return;
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

float Fixed::toFloat(void) const
{
	float ret = ((float)_fixed_point_value) / (1 << _fraction_bits);
	return ret;
}

int Fixed::toInt(void) const
{
	int ret = _fixed_point_value >> _fraction_bits;
	return ret;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	_fixed_point_value = fixed._fixed_point_value;
	std::cout << "Assignment operator called\n";
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}
