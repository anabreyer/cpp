#include "Bureaucrat.hpp"

const char*	GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char*	GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

Bureaucrat::Bureaucrat()
{
    std::cout << "[Bureaucrat] default constructor called" << ::std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    std::cout << "[Bureaucrat]" << std::endl;
}