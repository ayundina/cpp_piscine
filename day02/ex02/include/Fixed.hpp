#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <fstream>
#include <cmath>

class Fixed
{
private:
	int _fixed_point_value;
	static const int _fraction_bits = 8;

public:
	Fixed(void);
	Fixed(const int int_val);
	Fixed(const float floating_point_val);
	Fixed(const Fixed &fixed);
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	Fixed &operator=(const Fixed &fixed);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
