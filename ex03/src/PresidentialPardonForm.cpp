/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 09:24:57 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/26 09:25:00 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default")
{
	std::cout << "PresidentialPardonForm " << getAFormName() << " default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), target(other.target)
{
	std::cout << "PresidentialPardonForm " << getAFormName() << " default copy constructor called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &value)
{
	if (this != &value)
	{
		AForm::operator=(value);
		target = value.target;
	}
	std::cout << "PresidentialPardonForm " << getAFormName() << " assigment operator called." << std::endl;

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm " << getAFormName() << " destructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm target " << target << " default constructor called." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)const
{
	checkExecution(executor);
	
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}