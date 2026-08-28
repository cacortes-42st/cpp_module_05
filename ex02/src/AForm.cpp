/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 11:07:59 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/28 12:00:39 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

void AForm::checkExecution(Bureaucrat const &executor) const
{
	if (isSigned == true)
	{
		if (executor.getGrade() > ExGrade)
			throw GradeTooLowException();
	}
	else
		throw NoExecutionException();
}


AForm::AForm() : name("default"), isSigned(false), SigGrade(150), ExGrade(150) 
{
	std::cout << "AForm " << getAFormName() << " default constructor called." << std::endl;
}

AForm::AForm(const AForm &other) : name(other.name), isSigned(other.isSigned), SigGrade(other.SigGrade), ExGrade(other.ExGrade)
{
	std::cout << "AForm " << getAFormName() << " default copy constructor called." << std::endl;
}

AForm &AForm::operator=(const AForm &value)
{
	if (this != &value) 
		isSigned = value.isSigned;

	std::cout << "AForm " << getAFormName() << " assigment operator called." << std::endl;

	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm " << getAFormName() << " destructor called" << std::endl;
}


static int checkGrade(int grade)
{
    if (grade > 150)
        throw AForm::GradeTooLowException();
    if (grade < 1)
        throw AForm::GradeTooHighException();
    return grade;
}
AForm::AForm(std::string name, int sig, int ex) : name(name), isSigned(false), SigGrade(checkGrade(sig)), ExGrade(checkGrade(ex))
{
}

void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= SigGrade)
		isSigned = true;
	else
		throw GradeTooLowException();
}


std::string AForm::getAFormName(void)const
{
	return (name);
}

bool AForm::getSignedStat(void)const
{
	return (isSigned);
}

int AForm::getSigGrade(void)const
{
	return (SigGrade);
}

int AForm::getExGrade(void)const
{
	return (ExGrade);
}


const char *AForm::GradeTooHighException::what() const throw()
{
	return "the grade of the bureaucrat is too high for the AForm.";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "the grade of the bureaucrat is too low for the AForm.";
}

const char *AForm::NoExecutionException::what() const throw()
{
	return "The AForm needs to be signed before the execution.";
}


std::ostream& operator<<(std::ostream& os, const AForm& value)
{
	os << "The Aform: " << value.getAFormName() 
		<< ", has the signed status " << value.getSignedStat() 
		<< ", the grade required to sign it is " << value.getSigGrade() 
		<< ", the grade required to execute it is " << value.getExGrade() << ".\n" << std::endl;
	return (os);
}