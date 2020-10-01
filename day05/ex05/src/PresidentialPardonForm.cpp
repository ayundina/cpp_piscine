#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
		: Form("pardon", 25, 5),
			_target("file")
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
		: Form("pardon", 25, 5),
			_target(target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f)
		: Form(f),
			_target(f._target)
{
	return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
	Form::operator=(f);
	_target = f._target;
	return *this;
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return _target;
}

void PresidentialPardonForm::execute(const Bureaucrat &b) const
{
	if (b.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	if (!this->isSigned())
	{
		std::cout << "Form " << this->getName();
		std::cout << " must be signed before execution\n";
		return;
	}
	std::cout << _target << " has been pardoned by Zafod Beeblebrox\n";
	return;
}

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &f)
{
	std::string sign_mark = (f.isSigned()) ? "signed" : "not signed";
	os << "Form " << f.getName() << " is " << sign_mark;
	os << ". Grade to sign: " << f.getGradeToSign();
	os << ". Grade to execute: " << f.getGradeToExecute();
	os << ". Target: " << f.getTarget() << "\n";
	return os;
}
