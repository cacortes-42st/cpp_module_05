/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 13:25:38 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/25 14:29:55 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default")
{
	std::cout << "ShrubberyCreationForm " << getAFormName() << " default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target)
{
	std::cout << "ShrubberyCreationForm " << getAFormName() << " default copy constructor called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &value)
{
	if (this != &value)
	{
		AForm::operator=(value);
		target = value.target;
	}

	std::cout << "ShrubberyCreationForm " << getAFormName() << " assigment operator called." << std::endl;

	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm " << getAFormName() << " destructor called" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm target " << target << " default constructor called." << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)const
{
	checkExecution(executor);
	
	std::ofstream file((target + "_shrubbery").c_str());

	for (int i = 0; i < 5; i++)
	{
		file << "   /\\   " << std::endl;
		file << "  /  \\  " << std::endl;
		file << " /    \\ " << std::endl;
		file << "/______\\" << std::endl;
		file << "   ||   " << std::endl;
		file << "   ||   " << std::endl;

	}
	file.close();

}
