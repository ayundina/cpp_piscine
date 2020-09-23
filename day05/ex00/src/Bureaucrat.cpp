#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	_name = "Bureaucrat";
	_grade = _grade_max;
	return;
}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade)
{
	if (grade < _grade_min)
		throw GradeTooLowException();
	if (grade > _grade_max)
		throw GradeTooHighException();

	_name = name;
	_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
	_name = b._name;
	_grade = b._grade;
	return;
}

Bureaucrat::~Bureaucrat()
{
	return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
	_name = b._name;
	_grade = b._grade;
	return *this;
}

const std::string &Bureaucrat::getName() const
{
	return _name;
}

const int &Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade - 1 < _grade_min)
		throw GradeTooLowException();
	_grade -= 1;
	return;
}

void Bureaucrat::decrementGrade()
{
	if (_grade + 1 > _grade_max)
		throw GradeTooHighException();
	_grade += 1;
	return;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "\n";
	return os;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Exception: Grade too high\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception: Grade too low\n";
}
