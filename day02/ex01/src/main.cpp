/*

Write a canonical class to represent fixed point numbers:
• Private members:
 An integer to store the fixed point value.
 A static constant integer to store the number of fractional bits. This constant
will always be the litteral 8.
• Public members:
 A default constructor that initializes the fixed point value to 0.
 A destructor.
 A copy constructor.
 An assignation operator overload.
 A member function int getRawBits( void ) const; that returns the raw
value of the fixed point value.
 A member function void setRawBits( int const raw ); that sets the raw
value of the fixed point value.

*/

#include "../include/Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
