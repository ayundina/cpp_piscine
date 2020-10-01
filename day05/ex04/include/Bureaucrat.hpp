#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <exception>
#include "Form.hpp"

#define GRADE_MIN 150
#define GRADE_MAX 1

class Form;

class Bureaucrat
{
private:
	std::string _name;
	int _grade;

public:
	Bureaucrat();
	Bureaucrat(const std::string &name, const int &grade);
	Bureaucrat(const Bureaucrat &);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &);

	const std::string &getName() const;
	const int &getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &);
	void executeForm(const Form &);

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

std::ostream &operator<<(std::ostream &os, Bureaucrat &b);

#endif