#ifndef OFFICEBLOCK_H
#define OFFICEBLOCK_H

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <ctime>

class OfficeBlock
{
private:
	Intern *_intern;
	Bureaucrat *_signing_bureaucrat;
	Bureaucrat *_executing_bureaucrat;
	std::ofstream _log;

	OfficeBlock(const OfficeBlock &);
	OfficeBlock &operator=(const OfficeBlock &);

public:
	OfficeBlock();
	OfficeBlock(Intern *i, Bureaucrat *to_sign, Bureaucrat *to_execute);
	~OfficeBlock();

	void doBureaucracy(const std::string &form_type, const std::string &target);
};

#endif