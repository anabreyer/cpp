#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <fstream>
#include "GradeException.hpp"
#include "AForm.hpp"
#include "ASCIItree.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm&	operator = (const ShrubberyCreationForm& copy);
		virtual void			action(void) const;
};

#endif
