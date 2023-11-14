#ifndef INTERN_HPP
# define INTERN_HPP
#include <iostream>
#include "GradeException.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ASCIItree.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern& copy);
		Intern&	operator = (const Intern& copy);
		AForm*	makeForm(std::string form, std::string target);
		AForm*	shrubbery(std::string target);
		AForm*	robotomy(std::string target);
		AForm*	pardon(std::string target);
		InexistantForm	badForm;
};

#endif
