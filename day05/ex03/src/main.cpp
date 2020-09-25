#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int main()
{
	try
	{
		Intern no_name;
		Bureaucrat greg("Greg", 5);
		ShrubberyCreationForm shrubbery("home");
		Form *f = no_name.makeForm("presidential pardon", "f");
		RobotomyRequestForm robotomy("rob");
		PresidentialPardonForm pardon("pardon");

		std::cout << greg;
		std::cout << *f;
		std::cout << shrubbery;
		std::cout << robotomy;
		std::cout << pardon;

		f->beSigned(greg);
		shrubbery.beSigned(greg);
		robotomy.beSigned(greg);
		pardon.beSigned(greg);
		std::cout << shrubbery;
		std::cout << robotomy;
		std::cout << pardon;

		greg.executeForm(*f);
		greg.executeForm(shrubbery);
		robotomy.execute(greg);
		robotomy.execute(greg);
		pardon.execute(greg);
		delete f;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what();
	}
	return 0;
}
