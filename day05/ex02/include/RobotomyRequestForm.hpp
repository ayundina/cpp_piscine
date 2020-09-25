#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &);
	RobotomyRequestForm(const RobotomyRequestForm &);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(const RobotomyRequestForm &);

	const std::string &getTarget() const;
	void execute(Bureaucrat const &) const;
};

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &);

#endif
