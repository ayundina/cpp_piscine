#include "../include/Fixed.hpp"

Fixed::Fixed(void)
{
	_fixed_point_value = 0;
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
	return;
}

Fixed::Fixed(const float floating_point_val)
{
	_fixed_point_value = roundf(floating_point_val * (1 << _fraction_bits));
	return;
}

Fixed::Fixed(const Fixed &fixed)
{
	_fixed_point_value = fixed._fixed_point_value;
	return;
}

Fixed::~Fixed(void)
{
	return;
}

int Fixed::getRawBits(void) const
{
	return _fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
	_fixed_point_value = raw;
	return;
}

float Fixed::toFloat(void) const
{
	float ret = (float)_fixed_point_value;
	float scaling_factor = (float)(1 << _fraction_bits);
	ret = ret / scaling_factor;
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
	return *this;
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	Fixed tmp = this->toFloat() + fixed.toFloat();
	return tmp;
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	Fixed tmp = this->toFloat() - fixed.toFloat();
	return tmp;
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	Fixed tmp = this->toFloat() / fixed.toFloat();
	return tmp;
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	Fixed tmp = this->toFloat() * fixed.toFloat();
	return tmp;
}

Fixed &Fixed::operator++(void)
{
	++_fixed_point_value;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	_fixed_point_value++;
	return tmp;
}

Fixed &Fixed::operator--(void)
{
	--_fixed_point_value;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	_fixed_point_value--;
	return tmp;
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return this->getRawBits() != fixed.getRawBits();
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

const Fixed &min(const Fixed &fixed_a, const Fixed &fixed_b)
{
	return fixed_a.getRawBits() < fixed_b.getRawBits() ? fixed_a : fixed_b;
}

const Fixed &max(const Fixed &fixed_a, const Fixed &fixed_b)
{
	return fixed_a.getRawBits() > fixed_b.getRawBits() ? fixed_a : fixed_b;
}
