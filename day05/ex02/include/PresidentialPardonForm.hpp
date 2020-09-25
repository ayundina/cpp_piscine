#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &);
	PresidentialPardonForm(const PresidentialPardonForm &);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &);

	const std::string &getTarget() const;
	void execute(Bureaucrat const &) const;
};

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &);

#endif
