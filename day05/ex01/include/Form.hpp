#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	const int _grade_to_sign;
	const int _grade_to_execute;
	bool _is_signed;

public:
	Form();
	Form(const std::string &name, const int &grade_to_sign, const int &grade_to_execute);
	Form(const Form &);
	~Form();

	Form &operator=(const Form &);

	const std::string &getName() const;
	const bool &isSigned() const;
	const int &getGradeToSign() const;
	const int &getGradeToExecute() const;
	void beSigned(const Bureaucrat &);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &);

#endif