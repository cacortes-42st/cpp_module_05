/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 09:25:03 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/26 09:25:04 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default")
{
	std::cout << "RobotomyRequestForm " << getAFormName() << " default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), target(other.target)
{
	std::cout << "RobotomyRequestForm " << getAFormName() << " default copy constructor called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &value)
{
	if (this != &value)
	{
		AForm::operator=(value);
		target = value.target;
	}

	std::cout << "RobotomyRequestForm " << getAFormName() << " assigment operator called." << std::endl;

	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm " << getAFormName() << " destructor called" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm target " << target << " default constructor called." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)const
{
	checkExecution(executor);

	std::cout << "BRRRRRRRRRRRRRR" << std::endl;
	
	if (std::rand() % 2)
		std::cout << target << " has been robotomized..." << std::endl;
	else
		std::cout << "Robotomy failed." << std::endl;
}