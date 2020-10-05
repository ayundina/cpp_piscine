#include "../include/Convert.hpp"

void Convert::convert(char &)
{
	std::cout << "char: ";
	if (_numeric_type)
	{
		if (std::isnan(_d) || std::isinf(_d))
			throw ImpossibleConvertionException();
		if (!std::isprint(_d))
			throw NotPrintableCharException();
		_c = static_cast<char>(_d);
		std::cout << _c << "\n";
	}
	if (_alphabetic_type)
	{
		_c = _s.at(0);
		std::cout << _c << "\n";
	}
	return;
}

void Convert::convert(int &)
{
	std::cout << "int: ";
	if (_numeric_type)
	{
		if (std::isnan(_d) || std::isinf(_d))
			throw ImpossibleConvertionException();
		_i = static_cast<int>(_d);
		std::cout << _i << "\n";
	}
	if (_alphabetic_type)
	{
		_i = static_cast<int>(_c);
		std::cout << _i << "\n";
	}
	return;
}

void Convert::convert(float &)
{
	if (_numeric_type)
		_f = static_cast<float>(_d);
	if (_alphabetic_type)
		_f = static_cast<float>(_c);
	std::cout << "float: " << std::setprecision(_precision) << std::fixed << _f << "f\n";
	return;
}

void Convert::convert(double &)
{
	if (_alphabetic_type)
		_d = static_cast<double>(_c);
	std::cout << "double: " << std::setprecision(_precision) << std::fixed << _d << "\n";
	return;
}

void Convert::setInputType()
{
	try
	{
		_d = std::stod(_s);
		_numeric_type = true;
	}
	catch (const std::exception &e)
	{
		_alphabetic_type = true;
	}
}

void Convert::setPrecision()
{
	size_t point = _s.find(".");
	size_t len = _s.length();
	if (point != std::string::npos)
	{
		for (size_t i = point + 1; i < len && std::isdigit(_s.at(i)); i++)
		{
			_precision++;
		}
		return;
	}
	_precision = 1;
	return;
}

void Convert::print()
{
	try
	{
		convert(_c);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		convert(_i);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	convert(_f);
	convert(_d);
	return;
}

Convert::Convert()
{
	return;
}

Convert::Convert(const char *s)
{
	_s = static_cast<std::string>(s);
	_precision = 0;
	_numeric_type = false;
	_alphabetic_type = false;

	setInputType();
	setPrecision();
	return;
}

Convert::Convert(const Convert &convert)
{
	_s = convert._s;
	_numeric_type = convert._numeric_type;
	_alphabetic_type = convert._alphabetic_type;
	_precision = convert._precision;
	return;
}

Convert::~Convert()
{
	return;
}

Convert &Convert::operator=(const Convert &convert)
{
	_s = convert._s;
	_numeric_type = convert._numeric_type;
	_alphabetic_type = convert._alphabetic_type;
	_precision = convert._precision;
	return *this;
}

const char *Convert::NotPrintableCharException::what() const throw()
{
	return "not printable";
}

const char *Convert::ImpossibleConvertionException::what() const throw()
{
	return "impossible";
}
