#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
		: Form("robotomy", 72, 45),
			_target("file")
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
		: Form("robotomy", 72, 45),
			_target(target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f)
		: Form(f),
			_target(f._target)
{
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
	Form::operator=(f);
	_target = f._target;
	return *this;
}

const std::string &RobotomyRequestForm::getTarget() const
{
	return _target;
}

void RobotomyRequestForm::execute(const Bureaucrat &b) const
{
	static bool work_half_times = true;
	if (b.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	if (!this->isSigned())
	{
		std::cout << "Form " << this->getName();
		std::cout << " must be signed before execution\n";
		return;
	}
	if (work_half_times)
	{
		std::cout << "Robotomization failed\n";
		work_half_times = false;
		return;
	}
	std::cout << "Bip boop... I am a robot... ";
	std::cout << _target << " has been robotomized successfully\n";
	work_half_times = true;
	return;
}

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &f)
{
	std::string sign_mark = (f.isSigned()) ? "signed" : "not signed";
	os << "Form " << f.getName() << " is " << sign_mark;
	os << ". Grade to sign: " << f.getGradeToSign();
	os << ". Grade to execute: " << f.getGradeToExecute();
	os << ". Target: " << f.getTarget() << "\n";
	return os;
}
