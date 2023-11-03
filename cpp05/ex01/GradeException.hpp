#ifndef GRADEEXCEPTION_HPP
# define GRADEEXCEPTION_HPP
#include <exception>

class GradeTooHighException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

class GradeTooLowException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

#endif