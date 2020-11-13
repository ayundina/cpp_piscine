#include "../include/Human.hpp"

void Human::meleeAttack(const std::string &target)
{
	std::cout << "Human attacks " << target << " with a sword" << std::endl;
	return;
}

void Human::rangedAttack(const std::string &target)
{
	std::cout << "Human attacks " << target << " with spears" << std::endl;
	return;
}

void Human::intimidatingShout(const std::string &target)
{
	std::cout << "Human yells at " << target << std::endl;
	return;
}

void Human::action(const std::string &action_name, const std::string &target)
{
	typedef void (Human::*FuncPtr)(const std::string &);

	std::string action_arr[3] = {"melee", "range", "shout"};
	FuncPtr function[3] = {&Human::meleeAttack,
												 &Human::rangedAttack,
												 &Human::intimidatingShout};

	for (int i = 0; i < 3; i++)
	{
		if (action_arr[i] == action_name)
		{
			(this->*function[i])(target);
			return;
		}
	}
	std::cout << "\"" << action_name << "\" action is unknown" << std::endl;
	return;
}
