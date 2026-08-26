/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 09:55:53 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/26 16:29:18 by cacortes         ###   ########.fr       */
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


typedef AForm *(*FormCreator)(const std::string &);

static AForm *createShrubbery(const std::string &target)
{
    return new ShrubberyCreationForm(target);
}

static AForm *createRobotomy(const std::string &target)
{
    return new RobotomyRequestForm(target);
}

static AForm *createPresidential(const std::string &target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	int i;
	std::string forms[] = {
    	"shrubbery creation",
    	"robotomy request",
	    "presidential pardon"
	};

    FormCreator creators[] = {
        createShrubbery,
        createRobotomy,
        createPresidential
    };

	for (i = 0; i < 3; i++)
	{
		if (form == forms[i])
		{
            std::cout << "Intern creates " << form << std::endl;
            return creators[i](target);
		}
	}

    std::cout << "The provided form name does not exist." << std::endl;
    return NULL;
}