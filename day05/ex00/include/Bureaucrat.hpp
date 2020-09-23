#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	std::string _name;
	int _grade;
	static const int _grade_min = 1;
	static const int _grade_max = 150;

public:
	Bureaucrat();
	Bureaucrat(const std::string &, const int &);
	Bureaucrat(const Bureaucrat &);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &);

	const std::string &getName() const;
	const int &getGrade() const;
	void incrementGrade();
	void decrementGrade();

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