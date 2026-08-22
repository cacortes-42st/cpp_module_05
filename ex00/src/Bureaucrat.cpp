/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 11:07:53 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/22 23:42:33 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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


Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->grade = grade;
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


std::ostream& operator<<(std::ostream& os, const Bureaucrat& value)
{
	os << value.getName() << ", bureaucrat grade " << value.getGrade() << "." << std::endl;
	return (os);
}
