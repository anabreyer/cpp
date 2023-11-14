#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) \
: AForm("PresidentialPardonForm", target, 25, 5) //_name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	std::cout << "PresidentialPardonForm Constrctor: (" << target << ")\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Default Destructor\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) \
: AForm("PresidentialPardonForm", copy.getTarget(), 25, 5)
{
	std::cout << "PresidentialPardonForm Copy Constructor\n";
}

PresidentialPardonForm&	PresidentialPardonForm::operator = (const PresidentialPardonForm& copy)
{
	std::cout << "PresidentialPardonForm Assignment\n";
	(void)copy;
	return (*this);
}

void		PresidentialPardonForm::action(void) const
{
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox\n";
}
