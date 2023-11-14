#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include "GradeException.hpp"
#include "AForm.hpp"
#include "ASCIItree.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		PresidentialPardonForm&	operator = (const PresidentialPardonForm& copy);
		virtual void			action(void) const;
};

#endif
