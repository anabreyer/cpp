#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) \
: AForm("RobotomyRequestForm", target, 73, 45) //_name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	std::cout << "RobotomyRequestForm Constrctor: (" << target << ")\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Default Destructor\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) \
: AForm("RobotomyRequestForm", copy.getTarget(), 73, 45)
{
	std::cout << "RobotomyRequestForm Copy Constructor\n";
}

RobotomyRequestForm&	RobotomyRequestForm::operator = (const RobotomyRequestForm& copy)
{
	std::cout << "RobotomyRequestForm Assignment\n";
	(void)copy;
	return (*this);
}

void		RobotomyRequestForm::action(void) const
{
	srand((unsigned) time(NULL));
	std::cout << "* drilling noises *\n";
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized successfully\n";
	else
		std::cout << "robotomy failed\n";
}
