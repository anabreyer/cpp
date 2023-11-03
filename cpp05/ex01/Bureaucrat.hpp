#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "GradeException.hpp"
#include "Form.hpp"

class Form;

class Bureaucrat 
{
    private:
        std::string const       name;
        int                     grade;
        static const int        max_grade = 1;
        static const int        min_grade = 150;
		GradeTooHighException	tooHigh;
		GradeTooLowException	tooLow;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& other);
        ~Bureaucrat();
        Bureaucrat& operator = (const Bureaucrat& other);
        void			upgrade();
		void			downgrade();
		std::string		getName() const;
		int				getGrade() const;
		void			setGrade(int grade);
        void			signForm(Form& form) const;
};

std::ostream&	operator << (std::ostream& out, const Bureaucrat& a);


#endif