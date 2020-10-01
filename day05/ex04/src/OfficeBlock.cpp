#include "../include/OfficeBlock.hpp"

OfficeBlock::OfficeBlock()
		: _intern(new Intern),
			_signing_bureaucrat(new Bureaucrat("Mr Sign", 1)),
			_executing_bureaucrat(new Bureaucrat("Mr Execute", 1)),
			_log("log.txt", std::ofstream::app)
{
	return;
}

OfficeBlock::OfficeBlock(Intern *i, Bureaucrat *to_sign, Bureaucrat *to_execute)
		: _intern(i),
			_signing_bureaucrat(to_sign),
			_executing_bureaucrat(to_execute),
			_log("log.txt")
{

	return;
}

OfficeBlock::~OfficeBlock()
{
	delete _intern;
	delete _signing_bureaucrat;
	delete _executing_bureaucrat;
	return;
}

void logEntry()
{
	std::time_t t = std::time(0);
	std::tm *now = std::localtime(&t);

	std::cout << "\n\t";
	std::cout << (now->tm_year + 1900) << "-" << (now->tm_mon + 1) << "-";
	std::cout << now->tm_mday << " " << now->tm_hour << ":" << now->tm_min << ":";
	std::cout << now->tm_sec << "\n";
	return;
}

void OfficeBlock::doBureaucracy(const std::string &form_type, const std::string &target)
{
	if (std::freopen("log.txt", "a", stdout))
	{
		try
		{
			logEntry();
			Form *form = _intern->makeForm(form_type, target);
			_signing_bureaucrat->signForm(*form);
			_executing_bureaucrat->executeForm(*form);
			fclose(stdout);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what();
		}
	}
	else
	{
		std::cout << "OfficeBlock Error: unable to write into log.txt\n";
	}
	return;
}
