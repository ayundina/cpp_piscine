#include "../include/Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << "\tMelee attack is used on " << target << "\n";
	return;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "\tRange attack on " << target << "\n";
	return;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "\tIntimidating attack on " << target << "\n";
	return;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	int i = std::stoi(action_name);
	void (Human::*function_ptr[3])(std::string const &);
	function_ptr[0] = &Human::meleeAttack;
	function_ptr[1] = &Human::rangedAttack;
	function_ptr[2] = &Human::intimidatingShout;

	if (i >= 0 && i <= 2)
	{
		(this->*(function_ptr[i]))(target);
	}
	else
	{
		std::cout << "\t" << action_name << " is incorrect action name\n"; 
	}
	return;
}

/*

map<string,Std_interface∗> variable;
map<string,Pstd_mem> operation;

void call_member(string var, string oper)
{
	(variable[var]−>∗operation[oper])(); // var.oper()
}

*/
