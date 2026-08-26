/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 09:55:53 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/26 12:02:34 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called." << std::endl;
}

Intern::Intern(const Intern &other)
{
	*this = other;
	std::cout << "Intern default copy constructor called." << std::endl;
}

Intern &Intern::operator=(const Intern &value)
{
	if (this == &value)
		return *this;

	std::cout << "Intern assigment operator called." << std::endl;

	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}


AForm *Intern::makeForm(std::string form, std::string target)
{
	int i;
	std::string forms[] = {
    	"ShrubberyCreationForm",
    	"RobotomyRequestForm",
	    "PresidentialPardonForm"
	};

	for (i = 0; i < 3; i++)
	{
		if (form == forms[i])
			break;
	}

	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << form << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates " << form << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates " << form << std::endl;
			return (new PresidentialPardonForm(target));			
		default:
			std::cout << "The provided form name does not exist." << std::endl;
			return NULL;
	}
}