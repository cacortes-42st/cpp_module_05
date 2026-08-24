/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:32:08 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/24 13:33:02 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : name("default"), grade(150)
{
	std::cout << "RobotomyRequestForm " << getName() << " default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : name(other.name), grade(other.grade)
{
	std::cout << "RobotomyRequestForm " << getName() << " default copy constructor called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &value)
{
	if (this != &value)
		grade = value.grade;

	std::cout << "RobotomyRequestForm " << getName() << " assigment operator called." << std::endl;

	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm " << getName() << " destructor called" << std::endl;
}