#include "../include/CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy()
{
	_operational_offices = 0;
	_bureaucrat[0] = nullptr;
	_bureaucrat[1] = nullptr;
	_push_target = 0;
	_pop_target = 0;

	std::cout << "Central Bureaucracy has been created" << std::endl;
	return;
}

CentralBureaucracy::~CentralBureaucracy()
{
	for (; _operational_offices > 0; _operational_offices--)
	{
		delete _office[_operational_offices - 1];
	}
	std::cout << "Central Bureaucracy has acomplished its mission" << std::endl;
	return;
}

void CentralBureaucracy::formOffice()
{
	_office[_operational_offices] = new OfficeBlock(new Intern, _bureaucrat[0], _bureaucrat[1]);
	_operational_offices += 1;
	_bureaucrat[0] = nullptr;
	_bureaucrat[1] = nullptr;
	return;
}

void CentralBureaucracy::hireBureaucrat(Bureaucrat *b)
{
	if (_bureaucrat[0] == nullptr)
	{
		_bureaucrat[0] = b;
		return;
	}
	if (_bureaucrat[1] == nullptr)
	{
		_bureaucrat[1] = b;
		if (_operational_offices < 20)
			formOffice();
		return;
	}
	std::cout << "Central Bureaucracy is fully operational. HR is on vacation\n";
	return;
}

void CentralBureaucracy::queueUpTargets(const std::string &target)
{
	if (_push_target < 20)
	{
		_queue_targets[_push_target] = target;
		_push_target += 1;
	}
	return;
}

std::string takeForm()
{
	static int selector = 0;
	std::string form[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	selector += 1;
	return form[selector % 3];
}

void CentralBureaucracy::doBureaucracy()
{
	for (; _pop_target < _push_target; _pop_target++)
	{
		_office[_pop_target]->doBureaucracy(takeForm(), _queue_targets[_pop_target]);
	}
	return;
}
