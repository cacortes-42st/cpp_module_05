/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 11:25:21 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/28 11:43:59 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("default"), isSigned(false), SigGrade(150), ExGrade(150) 
{
	std::cout << "Form " << getFormName() << " default constructor called." << std::endl;
}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned), SigGrade(other.SigGrade), ExGrade(other.ExGrade)
{
	std::cout << "Form " << getFormName() << " default copy constructor called." << std::endl;
}

Form &Form::operator=(const Form &value)
{
	if (this != &value)
		isSigned = value.isSigned;

	std::cout << "Form " << getFormName() << " assigment operator called." << std::endl;

	return *this;
}

Form::~Form()
{
	std::cout << "Form " << getFormName() << " destructor called" << std::endl;
}


static int checkGrade(int grade)
{
    if (grade > 150)
        throw Form::GradeTooLowException();
    if (grade < 1)
        throw Form::GradeTooHighException();
    return grade;
}
Form::Form(std::string name, int sig, int ex) : name(name), isSigned(false), SigGrade(checkGrade(sig)), ExGrade(checkGrade(ex))
{
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= SigGrade)
		isSigned = true;
	else
		throw GradeTooLowException();
}


std::string Form::getFormName(void)const
{
	return (name);
}

bool Form::getSignedStat(void)const
{
	return (isSigned);
}

int Form::getSigGrade(void)const
{
	return (SigGrade);
}

int Form::getExGrade(void)const
{
	return (ExGrade);
}


const char *Form::GradeTooHighException::what() const throw()
{
	return "the grade of the bureaucrat is too high for the Form.";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "the grade of the bureaucrat is too low for the Form.";
}


std::ostream& operator<<(std::ostream& os, const Form& value)
{
	os << "The form: " << value.getFormName() 
		<< ", has the signed status " << value.getSignedStat() 
		<< ", the grade required to sign it is " << value.getSigGrade() 
		<< ", the grade required to execute it is " << value.getExGrade() << ".\n" << std::endl;
	return (os);
}