#include "../include/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat greg("Greg", 150);
		std::cout << greg;
		greg.incrementGrade();
		std::cout << greg;

		// Bureaucrat *bob = new Bureaucrat("Bob", 1);
		// std::cout << *bob;
		// bob->incrementGrade(); //caught exception will cause memory leak
		// std::cout << *bob;
		// delete bob;
		// bob = nullptr;

		Bureaucrat bob("Bob", 1);
		greg = bob;
		std::cout << greg;
		greg.incrementGrade();
		std::cout << greg;
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	return 0;
}