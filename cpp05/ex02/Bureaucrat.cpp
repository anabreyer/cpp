#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "[Bureaucrat] default constructor called" << ::std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << "[Bureaucrat] constructor with name and grade called\n";
	if (grade < this->max_grade)
		throw tooHigh;
	if (grade > this->min_grade)
		throw tooLow;
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "[Bureaucrat] Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.getName())
{
    std::cout << "[Bureaucrat] copy constructr called" << std::endl;
    this->grade = other.grade;
}

void Bureaucrat::setGrade(int grade)
{
    this->grade = grade;
}

Bureaucrat&	Bureaucrat::operator = (const Bureaucrat& other)
{
	std::cout << "Bureaucrat Assignment\n";
	if (this != &other)
		this->grade = other.getGrade();
	return (*this);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& a)
{
    out << a.getName() << ", bureaucrat grade " << a.getGrade() << std::endl;
    return (out);
}

void	Bureaucrat::upgrade(void)
{
	if (this->grade - 1 < this->max_grade)
		throw tooHigh;
	this->grade -= 1;
}

void	Bureaucrat::downgrade(void)
{
	if (this->grade + 1 > this->min_grade)
		throw tooLow;
	this->grade += 1;
}

void	Bureaucrat::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " couldn't sign " << form.getName() \
				  << " because " << e.what() << '\n';
	}
	
}