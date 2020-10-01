#ifndef CENTRALBUREAUCRACY_H
#define CENTRALBUREAUCRACY_H

#include "OfficeBlock.hpp"

class CentralBureaucracy
{
private:
	OfficeBlock *_office[20];
	int _operational_offices;
	Bureaucrat *_bureaucrat[2];
	std::string _queue_targets[20];
	int _push_target;
	int _pop_target;

	void formOffice();

public:
	CentralBureaucracy();
	~CentralBureaucracy();

	void hireBureaucrat(Bureaucrat *);
	void queueUpTargets(const std::string &);
	void doBureaucracy();
};

#endif
