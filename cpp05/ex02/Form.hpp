#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "GradeException.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	name;
		bool				sign;
		int const			sign_grade;
		int const			exec_grade;
		static const int	max_grade = 1;
		static const int	min_grade = 150;
		GradeTooHighException	tooHigh;
		GradeTooLowException	tooLow;
	public:
		Form();
		Form(std::string name, int sign_grade, int exec_grade);
		virtual ~Form();
		Form(const Form& other);
		Form&		operator = (const Form& other);
		std::string	getName() const;
		bool		getSignStatus() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		void		beSigned(const Bureaucrat& signer);
};

std::ostream&	operator << (std::ostream& out, const Form& a);

#endif