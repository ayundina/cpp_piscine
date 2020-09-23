#include "../include/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat greg("Greg", 150);
		std::cout << greg;
		greg.incrementGrade();
		// greg.decrementGrade();
		std::cout << greg;

		Form form("2078N", 2, 150);
		std::cout << form;

		Bureaucrat bob("Bob", 1);
		std::cout << bob;
		bob.signForm(form);
		bob.signForm(form);
		greg.signForm(form);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what();
	}
	return 0;
}