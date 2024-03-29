#include "GradeException.hpp"

const char*	GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char*	GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

const char*	FormNotSigned::what() const throw()
{
	return ("Form Not Signed");
}

const char*	InexistantForm::what() const throw()
{
	return ("Form Does Not Exist");
}