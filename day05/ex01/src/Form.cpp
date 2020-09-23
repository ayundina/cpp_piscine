#include "../include/Form.hpp"

Form::Form()
		: _name("general-form"),
			_grade_to_sign(GRADE_MAX),
			_grade_to_execute(GRADE_MAX),
			_is_signed(false)
{
	return;
}

Form::Form(const std::string &name, const int &grade_to_sign, const int &grade_to_execute)
		: _name(name),
			_grade_to_sign(grade_to_sign),
			_grade_to_execute(grade_to_execute),
			_is_signed(false)
{
	if (grade_to_sign < GRADE_MAX || grade_to_execute < GRADE_MAX)
		throw GradeTooHighException();
	if (grade_to_sign > GRADE_MIN || grade_to_execute > GRADE_MIN)
		throw GradeTooLowException();
	return;
}

Form::Form(const Form &f)
		: _name(f._name),
			_grade_to_sign(f._grade_to_sign),
			_grade_to_execute(f._grade_to_execute),
			_is_signed(f._is_signed)
{
	return;
}

Form::~Form()
{
	return;
}

Form &Form::operator=(const Form &f)
{
	_is_signed = f._is_signed;
	return *this;
}

const std::string &Form::getName() const
{
	return _name;
}

const bool &Form::isSigned() const
{
	return _is_signed;
}

const int &Form::getGradeToSign() const
{
	return _grade_to_sign;
}

const int &Form::getGradeToExecute() const
{
	return _grade_to_execute;
}

void Form::beSigned(const Bureaucrat &b)
{
	int b_grade = b.getGrade();

	if (b_grade > _grade_to_sign)
		throw GradeTooLowException();
	if (_is_signed)
	{
		std::cout << "Bureaucrat " << b.getName() << " can not sign " << _name;
		std::cout << " form because the form is signed\n";
		return;
	}
	std::cout << "Bureaucrat " << b.getName() << " signs ";
	std::cout << _name << " form\n";
	_is_signed = true;
	return;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Form exception: grade is too high ";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Form exception: grade is too low ";
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	std::string sign_mark = (f.isSigned()) ? "signed" : "not signed";
	os << "Form " << f.getName() << " is " << sign_mark;
	os << ". Grade to sign: " << f.getGradeToSign();
	os << ". Grade to execute: " << f.getGradeToExecute() << "\n";
	return os;
}