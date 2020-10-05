#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <string>

class Convert
{
private:
	std::string _s;
	char _c;
	int _i;
	float _f;
	double _d;
	unsigned int _precision;
	bool _numeric_type;
	bool _alphabetic_type;

	void setInputType();
	void setPrecision();
	void convert(char &);
	void convert(int &);
	void convert(float &);
	void convert(double &);

	Convert();

public:
	Convert(const char *);
	Convert(const Convert &);
	~Convert();

	Convert &operator=(const Convert &);

	void print();

	class NotPrintableCharException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class ImpossibleConvertionException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif
