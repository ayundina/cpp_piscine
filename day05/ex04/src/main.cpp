#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"
#include "../include/OfficeBlock.hpp"

int main()
{
	OfficeBlock office;
	office.doBureaucracy("shrubbery creation", "office");
	return 0;
}
