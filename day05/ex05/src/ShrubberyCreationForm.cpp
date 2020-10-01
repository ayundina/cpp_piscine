#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
		: Form("shrubbery", 145, 137),
			_target("file")
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
		: Form("shrubbery", 145, 137),
			_target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &f)
		: Form(f),
			_target(f._target)
{
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
	Form::operator=(f);
	_target = f._target;
	return *this;
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void writeToFile(std::ofstream &file)
{
	if (file.is_open())
	{
		file << "                  %%%,%%%%%%%\n";
		file << "                   ,'%% \\\\-*%%%%%%%\n";
		file << "             ;%%%%%*%   _%%%%\"\n";
		file << "              ,%%%       \\(_.*%%%%.\n";
		file << "              % *%%, ,%%%%*(    '\n";
		file << "            %^     ,*%%% )\\|,%%*%,_\n";
		file << "                 *%    \\/ #).-\"*%%*\n";
		file << "                     _.) ,/ *%,\n";
		file << "             _________/)#(_____________\n";
		file << "            b'ger\n";
	}
	return;
}

void ShrubberyCreationForm::execute(const Bureaucrat &b) const
{
	if (b.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	if (!this->isSigned())
	{
		std::cout << "Form " << this->getName();
		std::cout << " must be signed before execution\n";
		return;
	}
	std::ofstream file(_target + "_shrubbery");
	writeToFile(file);
	file.close();
	std::cout << "Shrubbery successfully executed\n";
	return;
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &f)
{
	std::string sign_mark = (f.isSigned()) ? "signed" : "not signed";
	os << "Form " << f.getName() << " is " << sign_mark;
	os << ". Grade to sign: " << f.getGradeToSign();
	os << ". Grade to execute: " << f.getGradeToExecute();
	os << ". Target: " << f.getTarget() << "\n";
	return os;
}
