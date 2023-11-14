#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <cstdlib>
#include "GradeException.hpp"
#include "AForm.hpp"
#include "ASCIItree.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm&	operator = (const RobotomyRequestForm& copy);
		virtual void			action(void) const;
};

#endif
