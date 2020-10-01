#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"
#include "../include/OfficeBlock.hpp"
#include "../include/CentralBureaucracy.hpp"

void sendBureaucrats(CentralBureaucracy &b)
{
	for (int i = 40; i > 0; i--)
	{
		b.hireBureaucrat(new Bureaucrat("Bob_" + std::to_string(i), i));
	}
	return;
}

void sendTargets(CentralBureaucracy &b)
{
	std::string name[] = {"office", "Putin", "printer",
												"house", "David", "vacuum",
												"garden", "China", "Morty"};
	for (int i = 20; i > 0; i--)
	{
		b.queueUpTargets(name[i % 9]);
	}
	return;
}

int main()
{
	CentralBureaucracy big_bureaucracy;
	sendBureaucrats(big_bureaucracy);
	sendTargets(big_bureaucracy);
	big_bureaucracy.doBureaucracy();
	return 0;
}
