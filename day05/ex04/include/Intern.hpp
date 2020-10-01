#ifndef INTERN_H
#define INTERN_H

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <map>

class Intern
{
private:
	Form *makeShrubberyForm(const std::string &target);
	Form *makeRobotomyForm(const std::string &target);
	Form *makePardonForm(const std::string &target);

public:
	Intern();
	~Intern();

	Form *makeForm(const std::string &type, const std::string &target);

	class UnknownFormException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif
