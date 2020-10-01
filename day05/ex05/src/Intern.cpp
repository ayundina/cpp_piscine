#include "../include/Intern.hpp"

Intern::Intern()
{
	return;
}

Intern::~Intern()
{
	return;
}

Form *Intern::makeShrubberyForm(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makePardonForm(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeRobotomyForm(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::makeForm(const std::string &type, const std::string &target)
{
	typedef Form *(Intern::*functionPointer)(const std::string &target);
	std::map<std::string, functionPointer> form;

	form.insert(std::make_pair("shrubbery creation", &Intern::makeShrubberyForm));
	form.insert(std::make_pair("robotomy request", &Intern::makeRobotomyForm));
	form.insert(std::make_pair("presidential pardon", &Intern::makePardonForm));

	functionPointer function_ptr = form[type];
	if (function_ptr == nullptr)
	{
		throw UnknownFormException();
	}
	std::cout << "Intern creates " << type << " form\n";
	return (this->*function_ptr)(target);
}

const char *Intern::UnknownFormException::what() const throw()
{
	return "Intern exception: requested form is unknown\n";
}
