#include "Form.hpp"

Form::Form() : sign_grade(1), exec_grade(1)
{
	std::cout << "[Form] Default Constrctor\n";
	this->sign = false;
}

Form::Form(std::string name, int sign_grade, int exec_grade) \
: name(name), sign_grade(sign_grade), exec_grade(exec_grade)
{
	std::cout << "[Form] Constrctor with name called\n";
	if (this->sign_grade > min_grade || this->exec_grade > min_grade)
	{
		std::cout << "Error: form construction out of bounds\n";
		throw tooLow;
	}
	if (this->sign_grade < max_grade || this->exec_grade < max_grade)
	{
		std::cout << "Error: form construction out of bounds\n";
		throw tooHigh;
	}
	this->sign = false;
}

Form::~Form()
{
	std::cout << "[Form] Default Destructor\n";
}

Form::Form(const Form& other) \
: name(getName()), sign_grade(getSignGrade()), exec_grade(getExecGrade())
{
	std::cout << "[Form] Copy Constructor\n";
	this->sign = other.getSignStatus();
}

Form&	Form::operator = (const Form& other)
{
	std::cout << "[Form] Assignment\n";
	if (this != &other)
		this->sign = other.getSignStatus();
	return (*this);
}

std::ostream&	operator << (std::ostream& out, const Form& a)
{
	out << a.getName() << ":" \
		<< "\nSign Status: " << a.getSignStatus() \
		<< "\nSign Grade: " << a.getSignGrade() \
		<< "\nExec Grade: " << a.getExecGrade() << std::endl;
	return (out);
}

std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getSignStatus() const
{
	return (this->sign);
}

int		Form::getSignGrade() const
{
	return (this->sign_grade);
}

int		Form::getExecGrade() const
{
	return (this->exec_grade);
}

void	Form::beSigned(const Bureaucrat& signer)
{
	if (this->sign_grade < signer.getGrade())
		throw tooLow;
	else
		this->sign = true;
}