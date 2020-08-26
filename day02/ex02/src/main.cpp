/*
$> ./a.out
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
$>
*/

#include "../include/Fixed.hpp"
#include <cfloat>

void testComparisonOperators(Fixed &a, const Fixed &b)
{
	int a_raw = a.getRawBits();
	int b_raw = b.getRawBits();

	if (b > a && b_raw > a_raw)
		std::cout << "\n b>a = true" << std::endl;
	else
		std::cout << "ERROR: operator > overload is incorrect" << std::endl;

	if (a < b && a_raw < b_raw)
		std::cout << " a<b = true" << std::endl;
	else
		std::cout << "ERROR: operator < overload is incorrect" << std::endl;

	Fixed c = a;
	int c_raw = c.getRawBits();

	if (b >= a && c >= a && b_raw >= a_raw && c_raw >= a_raw)
		std::cout << "b>=a = true" << std::endl;
	else
		std::cout << "ERROR: operator >= overload is incorrect" << std::endl;

	if (a <= b && c <= a && a_raw <= b_raw && c_raw <= a_raw)
		std::cout << "a<=b = true" << std::endl;
	else
		std::cout << "ERROR: operator <= overload is incorrect" << std::endl;

	if (a == c && a_raw == c_raw)
		std::cout << "a==c = true" << std::endl;
	else
		std::cout << "ERROR: operator == overload is incorrect" << std::endl;

	if (b != a && b_raw != a_raw)
		std::cout << "b!=a = true" << std::endl;
	else
		std::cout << "ERROR: operator != overload is incorrect" << std::endl;
	return;
}

void testArithmeticOperators(Fixed &a, Fixed &b)
{
	float a_float = a.toFloat();
	float b_float = b.toFloat();

	std::cout << "\n  a = " << a_float << std::endl;
	std::cout << "  b = " << b_float << std::endl;
	if ((a + b) == (a_float + b_float))
		std::cout << "a+b = " << a + b << std::endl;
	else
		std::cout << "EROR: operator + overload is incorrect" << std::endl;

	if ((a - b) == (a_float - b_float))
		std::cout << "a-b = " << a - b << std::endl;
	else
		std::cout << "EROR: operator - overload is incorrect" << std::endl;

	if ((a * b) == (a_float * b_float))
		std::cout << "a*b = " << a * b << std::endl;
	else
		std::cout << "EROR: operator * overload is incorrect" << std::endl;

	if ((a / b) == (a_float / b_float))
		std::cout << "a/b = " << a / b << std::endl;
	else
		std::cout << "EROR: operator / overload is incorrect" << std::endl;
	return;
}

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "  a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "  a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "  a = " << a << std::endl;
	std::cout << "  b = " << b << std::endl;
	std::cout << "max = " << max(a, b) << std::endl;
	std::cout << "min = " << min(a, b) << std::endl;

	std::cout << "\n  a = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "  a = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "  a = " << a << std::endl;

	// >, <, >=, <=, == and !=.
	testComparisonOperators(a, b);
	// +, -, *, and /
	Fixed c((float)3.14);
	Fixed d((float)-2.08);
	testArithmeticOperators(c, d);
	return 0;
}
