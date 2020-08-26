/*

Add the following public constructors and public member functions to your class:

1. constructor (takes a constant integer) and converts it to
the correspondant fixed(8) point value. The fractional bits value is initialized
like in ex00.

2. constructor (takes a constant floating point) and converts
it to the correspondant fixed(8) point value. The fractional bits value is
initialized like in ex00.

3. member function:
float toFloat( void ) const;
converts the fixed point value to a floating point value.

4. member function:
int toInt( void ) const;
converts the fixed point value to an integer value.

You will also add the following function overload to your header (declaration)
and source (definition) files:
5. « operator:
inserts a floating point representation of the
fixed point value into the parameter output stream.

*/

#include "../include/Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	Fixed const e(5.05f);
	Fixed const f(2);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "f is " << f << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.toInt() << " as integer" << std::endl;
	std::cout << "f is " << f.toInt() << " as integer" << std::endl;
	return 0;
}
