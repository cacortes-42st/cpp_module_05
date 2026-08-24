/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:33:29 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/24 13:34:21 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : name("default"), grade(150)
{
	std::cout << "PresidentialPardonForm " << getName() << " default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : name(other.name), grade(other.grade)
{
	std::cout << "PresidentialPardonForm " << getName() << " default copy constructor called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &value)
{
	if (this != &value)
		grade = value.grade;

	std::cout << "PresidentialPardonForm " << getName() << " assigment operator called." << std::endl;

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm " << getName() << " destructor called" << std::endl;
}