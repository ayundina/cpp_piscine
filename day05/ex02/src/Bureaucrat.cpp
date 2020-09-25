#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	_name = "Bureaucrat";
	_grade = GRADE_MAX;
	return;
}

Bureaucrat::Bureaucrat(const std::string &name, const int &grade)
{
	if (grade > GRADE_MIN)
		throw GradeTooLowException();
	if (grade < GRADE_MAX)
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
	if (_grade - 1 < GRADE_MAX)
		throw GradeTooHighException();
	_grade -= 1;
	return;
}

void Bureaucrat::decrementGrade()
{
	if (_grade + 1 > GRADE_MIN)
		throw GradeTooLowException();
	_grade += 1;
	return;
}

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return;
}

void Bureaucrat::executeForm(const Form &f)
{
	try
	{
		std::cout << _name << " executes " << f.getName() << "\n";
		f.execute(*this);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "\n";
	return os;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat exception: Grade is too high. Grade max is 1\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat exception: Grade is too low. Grade min is 150\n";
}
