#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);

	const std::string &getTarget() const;
	void execute(Bureaucrat const &) const;
};

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &);

#endif
