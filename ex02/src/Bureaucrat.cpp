/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 10:32:26 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/25 13:05:52 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
	std::cout << "Bureaucrat " << getName() << " default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
	std::cout << "Bureaucrat " << getName() << " default copy constructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &value)
{
	if (this != &value)
		grade = value.grade;

	std::cout << "Bureaucrat " << getName() << " assigment operator called." << std::endl;

	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << getName() << " destructor called" << std::endl;
}


void Bureaucrat::executeForm(AForm const & form)const
{
	try
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getAFormName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->grade = grade;
}

void	Bureaucrat::signAForm(AForm &Aform)
{
	try
	{
		Aform.beSigned(*this);
	}
	catch (std::exception& e)
	{
		std::cout << getName() << " couldn’t sign " << Aform.getAFormName() << " because " << e.what() << std::endl;
		return;
	}
	std::cout << getName() << " signed " << Aform.getAFormName() << std::endl;
	
}


std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}


void	Bureaucrat::GraIncrement(void)
{
	std::cout << "Incrementing the grade of " << getName() << std::endl;
	if (grade <= 1)
		throw GradeTooHighException();
	grade--;
}
void	Bureaucrat::GraDecrement(void)
{
	std::cout << "Decrementing the grade of " << getName() << std::endl;
	if (grade >= 150)
		throw GradeTooLowException();
	grade++;
}


const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The grade of the bureaucrat is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The grade of the bureaucrat is too low";
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& value)
{
	os << value.getName() << ", bureaucrat grade " << value.getGrade() << "." << std::endl;
	return (os);
}
