/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:25:38 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/24 13:27:44 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : name("default"), grade(150)
{
	std::cout << "ShrubberyCreationForm " << getName() << " default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : name(other.name), grade(other.grade)
{
	std::cout << "ShrubberyCreationForm " << getName() << " default copy constructor called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &value)
{
	if (this != &value)
		grade = value.grade;

	std::cout << "ShrubberyCreationForm " << getName() << " assigment operator called." << std::endl;

	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm " << getName() << " destructor called" << std::endl;
}